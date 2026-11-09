/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnMainCanvasChangeEndedHandler
void Rotatelab_Shop_StarChallengeController__OnMainCanvasChangeEndedHandler (Rotatelab_Shop_StarChallengeController_o* __this, int32_t mainCanvasType, bool arg2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnMainCanvasChangeEndedHandler
   void Rotatelab_Shop_StarChallengeController__OnMainCanvasChangeEndedHandler
   (Rotatelab_Shop_StarChallengeController_o* __this, int32_t mainCanvasType, bool arg2, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__OnMainCanvasChangeEndedHandler_10c8304
               (undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar6;
  undefined4 unaff_r6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 unaff_r7;
  int *piVar9;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pcVar7 = (char *)(_UNK_010d8474 + 0x10d831c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8478 + 0x10d8330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d847c + 0x10d833c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8480 + 0x10d8348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8484 + 0x10d8354));
    *pcVar7 = '\x01';
  }
  if (param_2 != 0) {
    return;
  }
  puVar8 = *(undefined4 **)(_UNK_010d8488 + 0x10d8370);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x10),0);
  if (iVar1 < 1) {
    return;
  }
  pcVar7 = (char *)(_UNK_010d848c + 0x10d83a4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8490 + 0x10d83b8));
    *pcVar7 = '\x01';
  }
  if (**(char **)(**(int **)(_UNK_010d8494 + 0x10d83cc) + 0x5c) == '\0') {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010d8498 + 0x10d8418));
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d849c + 0x10d842c));
    System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010d84a0 + 0x10d8448),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar7 = (char *)(_UNK_0108a578 + 0x108a524);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),1,uVar2,0,unaff_r4,unaff_r5,unaff_r6);
      *pcVar7 = '\x01';
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
              (*(int *)(iVar1 + 0x10),1,uVar2,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
    if (*(char *)(iVar1 + 0x1c) != '\0') {
      return;
    }
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    iVar3 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar1);
    if (iVar3 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
      uVar4 = thunk_FUN_00f00cdc();
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar4,uVar2,0);
    }
    else {
      iVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar5 != 0) {
        pcVar7 = (char *)(iRam036143f4 + 0x3614380);
        if (*pcVar7 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
          *pcVar7 = '\x01';
        }
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
            *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar1,iVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar4 = thunk_FUN_00f00cdc();
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar4,uVar2,0);
    }
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar4,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar1 + 0x10),0);
  pcVar7 = (char *)(_UNK_010d94a0 + 0x10d93c0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d94a4 + 0x10d93d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d94a8 + 0x10d93e0));
    *pcVar7 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d94ac + 0x10d93f4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(iVar1 + 0x10);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = (**(code **)(*piVar9 + 0xf0))(piVar9,*(undefined4 *)(*piVar9 + 0xf4));
  iVar3 = (int)((ulonglong)uVar11 >> 0x20);
  (**(code **)(*piVar9 + 0xf8))
            (piVar9,iVar3,(uint)uVar11 - (uint)uVar10,
             iVar3 - ((int)((ulonglong)uVar10 >> 0x20) + (uint)((uint)uVar11 < (uint)uVar10)),
             *(undefined4 *)(*piVar9 + 0xfc));
  piVar6 = *(int **)(iVar1 + 0x10);
  piVar9 = *(int **)(iVar1 + 0x20);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar6 + 0xf0))(piVar6,*(undefined4 *)(*piVar6 + 0xf4));
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = **(int **)(_UNK_010d94b0 + 0x10d9490);
  iVar3 = piVar9[5];
  if (iVar3 != 0) {
    iVar1 = (**(code **)(iVar3 + 0xc))
                      (*(undefined4 *)(iVar3 + 0x20),iVar1,*(undefined4 *)(iVar3 + 0x14),
                       *(code **)(iVar3 + 0xc),unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr
                      );
  }
  piVar6 = (int *)FUN_013a76ec(*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x24));
  if ((char)piVar9[7] == '\0') {
    iVar3 = (**(code **)(*piVar9 + 0xe0))(piVar9,*(undefined4 *)(*piVar9 + 0xe4));
    piVar9[8] = iVar3;
    *(undefined1 *)(piVar9 + 7) = 1;
  }
  else {
    iVar3 = piVar9[8];
  }
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = (**(code **)(*piVar6 + 0x100))(piVar6,iVar3,iVar1,*(undefined4 *)(*piVar6 + 0x104));
  if (iVar3 == 0) {
    (**(code **)(*piVar9 + 0xe8))(piVar9,iVar1,*(undefined4 *)(*piVar9 + 0xec));
    iVar3 = piVar9[6];
    piVar9[8] = iVar1;
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),iVar1,*(undefined4 *)(iVar3 + 0x14));
      return;
    }
  }
  return;
}

