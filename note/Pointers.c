int main() {
  int age = 21;  // create a data space to store age value, with the address ad;
  int *pAge = &age; // create a data space to store pAge value, which is the address of age ad, with another address;

  printf("address of age: %p\n", pAge);
  printf("value at stored address: %d\n", *pAge); //dereferencing, get the value stored in the address pAge
  return 0;
}
