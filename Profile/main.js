const firebaseConfig = {
    apiKey: "AIzaSyAy8v4szBUoa0mYnhKpYuX73P_3DA5wO0k",
    authDomain: "sl-topic-4.firebaseapp.com",
    projectId: "sl-topic-4",
    storageBucket: "sl-topic-4.appspot.com",
    messagingSenderId: "974549457876",
    appId: "1:974549457876:web:e28e58140b4350cc2f1441",
    measurementId: "G-0ZWE5KVXDW"
  };
firebase.initializeApp(firebaseConfig);

var db = firebase.firestore(); 


var storage = firebase.app().storage("gs://kursova-40288.appspot.com");


console.log(storage)


const fileInput = document.getElementById('fileInput');
const uploadButton = document.getElementById('uploadButton');


uploadButton.addEventListener('click', () => {
  const file = fileInput.files[0];
  const storageRef = firebase.storage().ref();


  // Генерувати унікальний ідентифікатор для завантаженого фото
  const uniqueId = new Date().getTime().toString();
  const photoRef = storageRef.child(`public/photos/${uniqueId}.jpg`);
    console.log(uniqueId)
  photoRef.put(file).then(snapshot => {
    console.log('Фото завантажено успішно.');


    // Отримати URL завантаженого фото
    snapshot.ref.getDownloadURL().then(downloadURL => {
      console.log('URL завантаженого фото:', downloadURL);


      // Відобразити завантажене фото на сторінці (якщо потрібно)
     
    });
  }).catch(error => {
    console.error('Помилка завантаження фото:', error);
  });
});












