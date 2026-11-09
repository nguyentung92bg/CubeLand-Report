/* IL2CPP: Rotatelab.UI.CreativeSlider$$GetValue
float Rotatelab_UI_CreativeSlider__GetValue (Rotatelab_UI_CreativeSlider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.CreativeSlider$$GetValue
   float Rotatelab_UI_CreativeSlider__GetValue (Rotatelab_UI_CreativeSlider_o* __this, const
   MethodInfo* method); */

float Rotatelab_UI_CreativeSlider__GetValue_110ae54(int param_1)

{
  float fVar1;
  int *piVar2;
  uint in_fpscr;
  float fVar3;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar1 = (float)(**(code **)(*piVar2 + 0x230))(piVar2,*(undefined4 *)(*piVar2 + 0x234));
  fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  return fVar1 / fVar3;
}

