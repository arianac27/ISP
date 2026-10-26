# ISP
Ejemplo de principio de segregación de interfaces
1. ¿Qué es?
El principio de segregacion de interfaces dice que una clase no esta obligada a implementar metodo innecesarios.
2. Implementación en este pequeño proyecto.
En el proyecto hay dos interfaces, la de impresora y envio. La de impresora imprime y la de envio envia el correo con la factura. Luego, la clase Recibo solo imprime, mientras que la clase Factura utiliza ambas. Esto
quiere decir que el principio se aplica porque las clases estan usando SOLO LOS METODOS QUE NECESITA.
