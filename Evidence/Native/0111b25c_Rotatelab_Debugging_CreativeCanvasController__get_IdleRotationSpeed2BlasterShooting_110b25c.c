/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$get_IdleRotationSpeed2BlasterShooting
float Rotatelab_Debugging_CreativeCanvasController__get_IdleRotationSpeed2BlasterShooting (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$get_IdleRotationSpeed2BlasterShooting
   float Rotatelab_Debugging_CreativeCanvasController__get_IdleRotationSpeed2BlasterShooting
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

float Rotatelab_Debugging_CreativeCanvasController__get_IdleRotationSpeed2BlasterShooting_110b25c
                (int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fVar4;
  
  iVar2 = *(int *)(param_1 + 0x74);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(iVar2 + 0x10);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar1 = (float)(**(code **)(*piVar3 + 0x230))(piVar3,*(undefined4 *)(*piVar3 + 0x234));
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  return fVar1 / fVar4;
}

