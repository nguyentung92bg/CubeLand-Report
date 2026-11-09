/* IL2CPP: Rotatelab.Scripts.BasePlaceableController.<>c__DisplayClass29_0$$<MoveToTransform>b__0
void Rotatelab_Scripts_BasePlaceableController___c__DisplayClass29_0___MoveToTransform_b__0 (Rotatelab_Scripts_BasePlaceableController___c__DisplayClass29_0_o* __this, UnityEngine_Transform_o* transform, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BasePlaceableController.<>c__DisplayClass29_0$$<MoveToTransform>b__0
   void Rotatelab_Scripts_BasePlaceableController___c__DisplayClass29_0___MoveToTransform_b__0
   (Rotatelab_Scripts_BasePlaceableController___c__DisplayClass29_0_o* __this,
   UnityEngine_Transform_o* transform, float t, const MethodInfo* method); */

void Rotatelab_Scripts_BasePlaceableController___c__DisplayClass29_0___MoveToTransform_b__0_1030af8
               (int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0xc);
  fVar3 = *(float *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_64,*(int *)(param_1 + 0x14),0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (param_2,fVar1 + ((fStack_64 + *(float *)(param_1 + 0x18)) - fVar1) * param_3,
             fVar2 + ((fStack_60 + *(float *)(param_1 + 0x1c)) - fVar2) * param_3,
             fVar3 + ((fStack_5c + *(float *)(param_1 + 0x20)) - fVar3) * param_3,0);
  return;
}

