/* IL2CPP: Rotatelab.Scripts.ObjectManager$$Initialize
void Rotatelab_Scripts_ObjectManager__Initialize (Rotatelab_Scripts_ObjectManager_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$Initialize
   void Rotatelab_Scripts_ObjectManager__Initialize (Rotatelab_Scripts_ObjectManager_o* __this,
   Rotatelab_SoLevelData_o* levelData, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__Initialize_102a844(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  float fVar5;
  
  uVar1 = Rotatelab_Scripts_ObjectManager__GetIdleRotationSpeed_102a878();
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  Rotatelab_Scripts_ObjectManager__GenerateObject_102aa60(param_1,param_2);
  Rotatelab_Scripts_ObjectManager__PrepareLevelStartSpin_102c464(param_1);
  pcVar4 = (char *)(_UNK_0103c698 + 0x103c5d4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103c69c + 0x103c5e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103c6a0 + 0x103c5f4));
    *pcVar4 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0103c6a4 + 0x103c608));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Networking_SatoriFlag_bool___op_Implicit_1a88b00
                    (*(undefined4 *)(iVar2 + 0x40),**(undefined4 **)(_UNK_0103c6a8 + 0x103c628));
  uVar1 = _UNK_0103c694;
  if (iVar2 != 0) {
    uVar1 = 0x3f800000;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  if (iVar2 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0x1b;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f000000;
  iVar2 = *(int *)(param_1 + 0x50);
  pcVar4 = (char *)(_UNK_0103d94c + 0x103d8c8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d950 + 0x103d8dc));
    *pcVar4 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_0103d954 + 0x103d8f8) + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar5 = *(float *)(param_1 + 0x54) * 0.5;
  UnityEngine_Transform__set_localScale_36155dc
            (iVar2,*(float *)(iVar3 + 0xc) * fVar5,*(float *)(iVar3 + 0x10) * fVar5,
             *(float *)(iVar3 + 0x14) * fVar5,0);
  return;
}

