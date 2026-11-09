/* IL2CPP: Rotatelab.Debugging.TestUserManager$$Awake
void Rotatelab_Debugging_TestUserManager__Awake (Rotatelab_Debugging_TestUserManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.TestUserManager$$Awake
   void Rotatelab_Debugging_TestUserManager__Awake (Rotatelab_Debugging_TestUserManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Debugging_TestUserManager__Awake_110f0bc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_0111f244 + 0x111f0d4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f248 + 0x111f0e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f24c + 0x111f0f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f250 + 0x111f100));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_0111f254 + 0x111f114));
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__GetComponent_object__143f3b0
                    (*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_0111f258 + 0x111f144));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(iVar3,0,0);
  piVar5 = *(int **)(_UNK_0111f25c + 0x111f17c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_20,0);
  System_DateTime__get_Date_2b49a20(&uStack_28,&uStack_20,0);
  uVar2 = uStack_24;
  uVar1 = uStack_28;
  Rotatelab_RotateConstants__get_LastOfferResetDate_1078f40(&uStack_28,0);
  uStack_20 = uStack_28;
  uStack_1c = uStack_24;
  System_DateTime__get_Date_2b49a20(&uStack_28,&uStack_20,0);
  iVar3 = System_DateTime__op_GreaterThan_2b4c2e4(uVar1,uVar2,uStack_28,uStack_24,0);
  if (iVar3 != 0) {
    Rotatelab_RotateConstants__set_TotalRewardedUseCount_1078ee0(0,0);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_28,0);
    Rotatelab_RotateConstants__set_LastOfferResetDate_10790b8(uStack_28,uStack_24,0);
  }
  return;
}

