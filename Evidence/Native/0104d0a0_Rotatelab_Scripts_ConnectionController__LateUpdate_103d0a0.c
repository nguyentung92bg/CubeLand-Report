/* IL2CPP: Rotatelab.Scripts.ConnectionController$$LateUpdate
void Rotatelab_Scripts_ConnectionController__LateUpdate (Rotatelab_Scripts_ConnectionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ConnectionController$$LateUpdate
   void Rotatelab_Scripts_ConnectionController__LateUpdate
   (Rotatelab_Scripts_ConnectionController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ConnectionController__LateUpdate_103d0a0(int param_1)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  float fStack_48;
  
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__LookAt_36163c0(*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x2c),0);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_50,iVar2,0);
  fVar1 = fStack_48;
  uVar4 = uStack_50;
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_50,*(int *)(param_1 + 0x28),0);
  pcVar3 = (char *)(_UNK_0104d1c4 + 0x104d134);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d1c8 + 0x104d14c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0104d1cc + 0x104d160) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = FloatVectorSub(uVar4,uStack_50,2,0x20);
  uVar4 = FloatVectorMult(uVar4,uVar4,2,0x20);
  UnityEngine_Transform__set_localScale_36155dc
            (iVar2,0x3f800000,0x3f800000,
             SQRT((float)uVar4 + (float)((ulonglong)uVar4 >> 0x20) +
                  (fVar1 - fStack_48) * (fVar1 - fStack_48)) * *(float *)(param_1 + 0x1c),0);
  return;
}

