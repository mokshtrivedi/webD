* {
    box-sizing: border-box;
    font-family: serif;
}
body {
    background-color: #d6d6d6;
}
h1 {
    text-align: center;
    color: black;
}

p {
    margin-top: 50px;
    padding: 10px;
}

.textbox {
    overflow: auto;
    height: 300px;
    }
    
section {
    border: 1px solid black;
    background-color: #a9acbb;
    margin: 15px;
   
    margin: 10px;
}

 section > h2 {
    float: right;
    width: 235px;
    padding: 8px;
    text-align: center;
    border-bottom: 1px solid black;
    border-left: 1px solid black;
    font-family: serif;
    margin: 0;
    font-style: Times;
    font-size: 24px;
    font-weight: bold;
    height: 45px;
    padding-top: 10px;
}


 section.Physics > h2 {
 color: #e2e2e2;
    background-color: #001111;
}


 section.Chemistry > h2 {
 color: #e2e2e2;
    background-color: #001111;
}


 section.Maths > h2 {
    color: #e2e2e2;
    background-color: #001111;
}


section > p{
    padding: 40px 15px 15px 15px;
}

.row {
    width: 100%;
}


 /* desktop view options */
 @media (min-width: 992px) {
    .col-lg-1, .col-lg-2, .col-lg-3, .col-lg-4, .col-lg-5, .col-lg-6, .col-lg-7, .col-lg-8, .col-lg-9, .col-lg-10, .col-lg-11, .col-lg-12 {
        float: left;
    }
    .col-lg-1 {
        width: 8.33%;
    }
    .col-lg-2 {
        width: 16.66%;
    }
    .col-lg-3 {
        width: 25%;
    }
    .col-lg-4 {
        width: 33.33%;
    }
    .col-lg-5 {
        width: 41.66%;
    }
    .col-lg-6 {
        width: 50%;
    }
    .col-lg-7 {
        width: 58.33%;
    }
    .col-lg-8 {
        width: 66.66%;
    }
    .col-lg-9 {
        width: 74.99%;
    }
    .col-lg-10 {
        width: 83.33%;
    }
    .col-lg-11 {
        width: 91.66%;
    }
    .col-lg-12 {
        width: 100%;
    }
}
  
/* Tablet view options */

@media (min-width: 768px) and (max-width: 991px) {
    .col-md-1, .col-md-2, .col-md-3, .col-md-4, .col-md-5, .col-md-6, .col-md-7, .col-md-8, .col-md-9, .col-md-10, .col-md-11, .col-md-12 {
        float: left;
    }
    .col-md-1 {
        width: 8.33%;
    }
    .col-md-2 {
        width: 16.66%;
    }
    .col-md-3 {
        width: 25%;
    }
    .col-md-4 {
        width: 33.33%;
    }
    .col-md-5 {
        width: 41.66%;
    }
    .col-md-6 {
        width: 50%;
    }
    .col-md-7 {
        width: 58.33%;
    }
    .col-md-8 {
        width: 66.66%;
    }
    .col-md-9 {
        width: 74.99%;
    }
    .col-md-10 {
        width: 83.33%;
    }
    .col-md-11 {
        width: 91.66%;
    }
    .col-md-12 {
        width: 100%;
    }
}


/* Mobile view options */

@media (max-width: 767px) {
    .col-sm-1, .col-sm-2, .col-sm-3, .col-sm-4, .col-sm-5, .col-sm-6, .col-sm-7, .col-sm-8, .col-sm-9, .col-sm-10, .col-sm-11, .col-sm-12 {
        float: left;
    }
    .col-sm-1 {
        width: 8.33%;
    }
    .col-sm-2 {
        width: 16.66%;
    }
    .col-sm-3 {
        width: 25%;
    }
    .col-sm-4 {
        width: 33.33%;
    }
    .col-sm-5 {
        width: 41.66%;
    }
    .col-sm-6 {
        width: 50%;
    }
    .col-sm-7 {
        width: 58.33%;
    }
    .col-sm-8 {
        width: 66.66%;
    }
    .col-sm-9 {
        width: 74.99%;
    }
    .col-sm-10 {
        width: 83.33%;
    }
    .col-sm-11 {
        width: 91.66%;
    }
    .col-sm-12 {
        width: 100%;
    }
}