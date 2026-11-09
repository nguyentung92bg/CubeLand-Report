/* IL2CPP: Rotatelab.Scripts.ObjectManager$$PrepareLevelStartSpin
void Rotatelab_Scripts_ObjectManager__PrepareLevelStartSpin (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$PrepareLevelStartSpin
   void Rotatelab_Scripts_ObjectManager__PrepareLevelStartSpin (Rotatelab_Scripts_ObjectManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__PrepareLevelStartSpin_102c464(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_0103c5a8 + 0x103c480);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103c5ac + 0x103c494));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103c5b0 + 0x103c4a0));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0103c5b4 + 0x103c4b4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_SatoriFlag_bool___op_Implicit_1a88b00
                    (*(undefined4 *)(iVar1 + 0x40),**(undefined4 **)(_UNK_0103c5b8 + 0x103c4d4));
  uVar4 = _UNK_0103c5a4;
  if (iVar1 != 0) {
    uVar4 = 0x3f800000;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x9c) = 6;
    *(undefined4 *)(param_1 + 0x94) = 0x42d80001;
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_up_36151f0(&uStack_34,*(int *)(param_1 + 0x14),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = fmodf(*(undefined4 *)(param_1 + 0x94),0x43b40000);
    UnityEngine_Transform__Rotate_3616240
              (iVar1,uStack_34,uStack_30,uStack_2c,uVar2 ^ 0x80000000,0,0);
  }
  return;
}

