/* IL2CPP: Rotatelab.Scripts.ObjectManager$$PrepareLevelStartScale
void Rotatelab_Scripts_ObjectManager__PrepareLevelStartScale (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$PrepareLevelStartScale
   void Rotatelab_Scripts_ObjectManager__PrepareLevelStartScale (Rotatelab_Scripts_ObjectManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__PrepareLevelStartScale_102c5bc(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_0103c698 + 0x103c5d4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103c69c + 0x103c5e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103c6a0 + 0x103c5f4));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0103c6a4 + 0x103c608));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_SatoriFlag_bool___op_Implicit_1a88b00
                    (*(undefined4 *)(iVar1 + 0x40),**(undefined4 **)(_UNK_0103c6a8 + 0x103c628));
  uVar5 = _UNK_0103c694;
  if (iVar1 != 0) {
    uVar5 = 0x3f800000;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0x1b;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f000000;
  iVar1 = *(int *)(param_1 + 0x50);
  pcVar3 = (char *)(_UNK_0103d94c + 0x103d8c8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d950 + 0x103d8dc));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_0103d954 + 0x103d8f8) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar4 = *(float *)(param_1 + 0x54) * 0.5;
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,*(float *)(iVar2 + 0xc) * fVar4,*(float *)(iVar2 + 0x10) * fVar4,
             *(float *)(iVar2 + 0x14) * fVar4,0);
  return;
}

