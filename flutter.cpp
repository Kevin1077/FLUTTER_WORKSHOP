import 'package:flutter/material.dart';
void main(){
  runApp(MaterialApp( 
    home:Scaffold(
    appBar: AppBar(
      backgroundColor: Colors.red,
      title: Text('home'),
      centerTitle: true,
    ),
     body: Container(
     color: Colors.purpleAccent,
       height: 150,
       width: 200,
       child: Center(
         child: Text('hey niggas', style: TextStyle(color: Colors.white, fontSize: 30),),
     )
       )
    ),
  ),);
}
