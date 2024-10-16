const pertanyaan = document.getElementById("pertanyaan")
const jawaban = document.getElementById("jawaban")
const btn = document.getElementById("btn")
const loaders = document.getElementById("loaders")
const container = document.getElementsByClassName("container")

let init = 0
let usersData = []

const botSay = (data) => {
  return ["Halo perkenalkan saya JayBot, nama kamu siapa?",
  `Halo ${data?.nama}, berapa usia kamu?`,
  `ohh ${data?.usia}, hobi kamu apa ya?`,
  `wah sama dong aku juga suka ${data?.hobi}, btw udh punya pacar apa blom?`,
  `ouuu ${data?.pacar} yaaa, yaudah deh mimin pergi dlu ya...`
  ]
}
pertanyaan.innerHTML = botSay()[0]

function botStart() {
  if(jawaban.value.length < 1) return alert("silahkan isi jawaban dulu")
  init++
  if(init === 1){
    botDelay({ nama: jawaban.value })
  } else if (init === 2){
    botDelay({ usia: jawaban.value })
  } else if (init === 3) {
    botDelay({ hobi: jawaban.value })
  } else if (init === 4) {
    botDelay({ pacar: jawaban.value })
  } else if (init === 5) {
    finishing()
  } else{
    botEnd()
  }
}

function botDelay(jawabanUser){
  loaders.style.display = "block"
  container[0].style.filter = "blur(8px)"
  setTimeout(() => {
    pertanyaan.innerHTML = botSay(jawabanUser)[init]
    loaders.style.display = "none"
    container[0].style.filter = "none"
  }, [1000]);
  usersData.push(jawaban.value)
  jawaban.value = ''
}

function finishing(){
  pertanyaan.innerHTML = `Thank you ya ${usersData[0]} udah main ke JayBot! 🤗, kapan-kapan kita ${usersData[2]} bareng ya!`
  jawaban.value = 'Sama-sama! 😊'
}
function botEnd(){
  alert("Terimakasih sudah berkunjung, Anda akan diarahkan ke halaman")
  loaders.style.display = "block"
  container[0].style.filter = "blur(8px)"
  setTimeout(() => {
    window.location.reload()
    loaders.style.display = "none"
    container[0].style.filter = "none"
  }, [1500])
}

jawaban.addEventListener("keypress", function(enterBtn){
  if (enterBtn.key == "Enter"){
    enterBtn.preventDefault();
    btn.click();
  }
})