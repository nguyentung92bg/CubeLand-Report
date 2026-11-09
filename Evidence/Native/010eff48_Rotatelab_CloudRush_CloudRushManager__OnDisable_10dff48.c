/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$OnDisable
void Rotatelab_CloudRush_CloudRushManager__OnDisable (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$OnDisable
   void Rotatelab_CloudRush_CloudRushManager__OnDisable (Rotatelab_CloudRush_CloudRushManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__OnDisable_10dff48(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010f0104 + 0x10eff5c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0108 + 0x10eff70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f010c + 0x10eff7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0110 + 0x10eff88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0114 + 0x10eff94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0118 + 0x10effa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f011c + 0x10effac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0120 + 0x10effb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0124 + 0x10effc4));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_BaseOfferButton__OnDisable_10cc330(param_1);
  piVar8 = *(int **)(_UNK_010f0128 + 0x10effe0);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x19c);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f012c + 0x10f0004));
  System_Action_bool__Int32Enum____ctor_1f17ef8
            (uVar3,param_1,**(undefined4 **)(_UNK_010f0130 + 0x10f0028),0);
  uVar3 = Rotatelab_GameAction_bool__Int32Enum___op_Subtraction_23a3d58
                    (uVar7,uVar3,**(undefined4 **)(_UNK_010f0134 + 0x10f0040));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x19c) = uVar3;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x198);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f0138 + 0x10f0070));
  System_Action_bool__Int32Enum____ctor_1f17ef8
            (uVar3,param_1,**(undefined4 **)(_UNK_010f013c + 0x10f0090),0);
  uVar3 = Rotatelab_GameAction_bool__Int32Enum___op_Subtraction_23a3d58
                    (uVar7,uVar3,**(undefined4 **)(_UNK_010f0140 + 0x10f00a8));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x198) = uVar3;
  thunk_FUN_00ec5080();
  if (*(char *)(param_1 + 0x98) == '\0') {
    return;
  }
  puVar4 = *(undefined4 **)(_UNK_010f0144 + 0x10f00dc);
  *(undefined1 *)(param_1 + 0x98) = 0;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_010ed528 + 0x10ed4d0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed52c + 0x10ed4e4));
    *pcVar6 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_010ed530 + 0x10ed4fc);
  *(undefined1 *)(iVar2 + 0x20) = 0;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar2 != 0) {
    pcVar6 = (char *)(_UNK_0108a5f4 + 0x108a59c);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),0x12,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
      *pcVar6 = '\x01';
    }
    pcVar6 = (char *)(iVar2 + 0x14);
    if ((*pcVar6 != '\0') && (*(int *)(iVar2 + 0x18) == 0x12)) {
      *(undefined4 *)(iVar2 + 0x18) = 0;
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
    }
    if (*(char *)(iVar2 + 0x1c) != '\0') {
      return;
    }
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar2);
    if (iVar1 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
      uVar7 = thunk_FUN_00f00cdc();
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar7,uVar3,0);
    }
    else {
      iVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar5 != 0) {
        pcVar6 = (char *)(iRam036143f4 + 0x3614380);
        if (*pcVar6 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
          *pcVar6 = '\x01';
        }
        if (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
          }
          UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
            *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar2,iVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar7 = thunk_FUN_00f00cdc();
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar7,uVar3,0);
    }
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar7,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

