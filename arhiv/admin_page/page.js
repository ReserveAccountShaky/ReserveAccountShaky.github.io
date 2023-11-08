const firebaseConfig = {
    apiKey: "AIzaSyD5zdxHnEJ-sg9DAEWU2VY5sl0C_MaC2G8",
    authDomain: "studylinkv.firebaseapp.com",
    projectId: "studylinkv",
    storageBucket: "studylinkv.appspot.com",
    messagingSenderId: "220527342329",
    appId: "1:220527342329:web:df3da44a2107c6fca12828"
  };

firebase.initializeApp(firebaseConfig);

var db = firebase.firestore();



function showModal(id){
    document.getElementById(id).classList.add('show')
}

function hideModal(id){
    document.getElementById(id).classList.remove('show')
}

    let vsi_masive = []
    let nomer = 0;

function addUser(){
        let user = {
            name: document.getElementById('name').value,
            developer: document.getElementById('developer').value,
            img: document.getElementById('img').value,
            price: document.getElementById('price').value,
            reviews: document.getElementById('reviews').value,
            type:document.getElementById('type').value
        }
        
        db.collection("kursova_tovari").add(user).then(function(){
            console.log('Додано')
            hideModal('newTaskModal')
            location.reload()
        })
    }
    
    function drawUsers(){
        let tbody = document.getElementById('tbody')
        tbody.innerHTML = ''
         let index = 1;
        db.collection("kursova_tovari").get().then(res => {
            res.forEach(function(doc){
                let tovar = doc.data();
                tovar.id = doc.id;
                vsi_masive.push(tovar)
               
                tbody.innerHTML += `
                <tr>
                <th scope="row">${index}</th>
                <td>${tovar.name}</td>
				<td>${tovar.developer}</td>
				<td>${tovar.img}</td>
				<td>${tovar.price}</td>
				<td>${tovar.reviews}</td>
				<td>${tovar.type}</td>
                <td class="text-center"><button class="btn btn-warning btn-sm" onclick="edit(${nomer})">Редагувати</button></td>
                <td class="text-center"><button class="btn btn-danger btn-sm" onclick="delUser('${tovar.id}')">x</button></td>
              </tr>
                `
                nomer++;
                index++;
            })
        })
    }
    
    drawUsers()
    
    function SaveEditUser(id){
        let user = {
            name: document.getElementById('name_edit').value,
            developer: document.getElementById('developer_edit').value,
            img: document.getElementById('img_edit').value,
            price: document.getElementById('price_edit').value,
            reviews: document.getElementById('reviews_edit').value,
            type:document.getElementById('type_edit').value
        }
        console.log(user)
        db.collection("kursova_tovari").doc(id).set(user).then(function(){
            console.log('Оновлено')
            hideModal('editTaskModal')
            location.reload()
        })
    }
    
    function edit(index){
       document.getElementById('name_edit').value = vsi_masive[index].name;
        document.getElementById('developer_edit').value= vsi_masive[index].developer;
        document.getElementById('img_edit').value= vsi_masive[index].img;
        document.getElementById('price_edit').value= vsi_masive[index].price;
        document.getElementById('reviews_edit').value= vsi_masive[index].reviews;
        document.getElementById('type_edit').value= vsi_masive[index].type;
        showModal('editTaskModal')
        document.getElementById('saveEd').setAttribute('onclick', `SaveEditUser("${vsi_masive[index].id}")`)
    }
    
    function delUser(userId){
        db.collection('kursova_tovari').doc(userId).delete().then(function(){
            location.reload()
        })
        
    }
    