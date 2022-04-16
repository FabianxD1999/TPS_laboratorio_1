/// \ brief muestra en pantalla todos los  resultados
/// \ param numero guardado en la variable debitoLatam
/// \ param numero guardado en la variable creditoLatam
/// \ param numero guardado en la variable unitarioLatam
/// \ param numero guardado en la variable debitoAerolineas
/// \ param numero guardado en la variable creditoAerolineas
/// \ param numero guardado en la variable unitarioAerolineas
/// \ param numero guardado en la variable precioAerolineas
/// \ param numero guardado en la variable precioLatam
/// \ param numero guardado en la variable bitcoinAerolineas
/// \ param numero guardado en la variable bitcoinLatam
/// /// \ param numero guardado en la variable diferencia
/// \ return no  retorna nada
void MostrarResultadosAgencias(int debitoL,int creditoL,float unitarioL,int debitoA,int creditoA,float unitarioA,float precioa,float preciol,float bitcoinA,float bitcoinL,float diferencia);

/// \ brief pide al usuario que ingrese un numero y lo devuelve
/// \ param mensaje a eleccion del ususario  al llamar a la funcion
/// \ return retorna el numero flotante que el usuario ingreso
float PedirFloat(char mensaje[]);

/// \ brief recibe los  datos harcodeados , hace todos los calculos y lo muestra
/// \ param los kilometros
/// \ param el precio de aerolineas
/// \ param el precio  de  latam
/// \ param el porcentaje de  interes
/// \ param el porcentaje de descuento
/// \ return no retorna nada
void MostrarResultadosHarcodeados(float kilometros,float precioA,float precioLint ,int interes,int descuento);
