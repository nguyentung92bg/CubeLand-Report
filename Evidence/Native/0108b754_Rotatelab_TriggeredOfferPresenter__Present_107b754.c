/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$Present
void Rotatelab_TriggeredOfferPresenter__Present (int32_t trigger, System_Action_o* onCompleted, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0108bc88) */
/* WARNING: Removing unreachable block (ram,0x0108bc98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$Present
   void Rotatelab_TriggeredOfferPresenter__Present (int32_t trigger, System_Action_o* onCompleted,
   const MethodInfo* method); */

void Rotatelab_TriggeredOfferPresenter__Present_107b754(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  
  pcVar7 = (char *)(_UNK_0108bdec + 0x108b770);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf0 + 0x108b784));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf4 + 0x108b790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf8 + 0x108b79c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdfc + 0x108b7a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be00 + 0x108b7b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be04 + 0x108b7c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be08 + 0x108b7cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be0c + 0x108b7d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be10 + 0x108b7e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be14 + 0x108b7f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be18 + 0x108b7fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be1c + 0x108b808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be20 + 0x108b814));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be24 + 0x108b820));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be28 + 0x108b82c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be2c + 0x108b838));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be30 + 0x108b844));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be34 + 0x108b850));
    *pcVar7 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be38 + 0x108b868));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar8 = *(undefined4 **)(_UNK_0108be3c + 0x108b894);
  *(undefined4 *)(iVar1 + 8) = param_1;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar2 + 0x14) + 0x10) == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_UI_UIManager__get_ActivePageType_1127178(iVar2,0);
    if (iVar2 != 1) goto LAB_0108bca0;
  }
  piVar14 = *(int **)(_UNK_0108be40 + 0x108b900);
  iVar2 = *piVar14;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar14;
  }
  iVar12 = *(int *)(iVar1 + 0xc);
  uVar11 = **(undefined4 **)(iVar2 + 0x5c);
  if (iVar12 == 0) {
    iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be44 + 0x108b93c));
    System_Func_object__bool____ctor_239b120
              (iVar12,iVar1,**(undefined4 **)(_UNK_0108be48 + 0x108b958),0);
    *(int *)(iVar1 + 0xc) = iVar12;
    thunk_FUN_00ec5080((int *)(iVar1 + 0xc),iVar12);
  }
  uVar11 = System_Linq_Enumerable__Where_object__1479294
                     (uVar11,iVar12,**(undefined4 **)(_UNK_0108be4c + 0x108b980));
  piVar9 = *(int **)(_UNK_0108be50 + 0x108b998);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar9;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x5c);
  iVar12 = puVar8[1];
  if (iVar12 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar8 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar10 = *puVar8;
    iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be54 + 0x108b9e0));
    System_Func_object__Int32Enum____ctor_239b3a8
              (iVar12,uVar10,**(undefined4 **)(_UNK_0108be58 + 0x108ba00),0);
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
    *piVar9 = iVar12;
    thunk_FUN_00ec5080(piVar9,iVar12);
  }
  piVar9 = (int *)System_Linq_Enumerable__OrderBy_object__Int32Enum__146d818
                            (uVar11,iVar12,**(undefined4 **)(_UNK_0108be5c + 0x108ba2c));
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar9;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0108be60 + 0x108ba54)) {
        puVar8 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
        goto LAB_0108ba9c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar8 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0108be60 + 0x108ba54),0);
LAB_0108ba9c:
  piVar9 = (int *)(*(code *)*puVar8)(piVar9,puVar8[1]);
  piVar13 = *(int **)(_UNK_0108be64 + 0x108bacc);
  piVar5 = *(int **)(_UNK_0108be68 + 0x108bad4);
  puVar8 = *(undefined4 **)(_UNK_0108be6c + 0x108badc);
  do {
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar13) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_0108bb38;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,*piVar13,0);
LAB_0108bb38:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 == 0) {
      if (piVar9 == (int *)0x0) goto LAB_0108bca0;
      iVar2 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 == 0) goto LAB_0108bc54;
      piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      break;
    }
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar5) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_0108bbb0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,*piVar5,0);
LAB_0108bbb0:
    uVar11 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    iVar2 = *piVar14;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar14;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Queue_object___Enqueue_18fca70(iVar2,uVar11,*puVar8);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar14 = piVar14 + 2;
    if (uVar4 == 0) break;
    if (piVar14[-1] == **(int **)(_UNK_0108be70 + 0x108bc28)) {
      puVar8 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0xc0);
      goto LAB_0108bc70;
    }
  }
LAB_0108bc54:
  puVar8 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0108be70 + 0x108bc28),0);
LAB_0108bc70:
  (*(code *)*puVar8)(piVar9,puVar8[1]);
LAB_0108bca0:
  piVar14 = *(int **)(_UNK_0108be74 + 0x108bcac);
  iVar2 = *piVar14;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar14;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
    if (param_2 != 0) {
      (**(code **)(param_2 + 0xc))(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x14));
    }
  }
  else {
    iVar2 = *piVar14;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar14;
    }
    piVar9 = (int *)(*(int *)(iVar2 + 0x5c) + 0xc);
    *piVar9 = param_2;
    thunk_FUN_00ec5080(piVar9,param_2);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0108be78 + 0x108bd14));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar8 = *(undefined4 **)(_UNK_0108be7c + 0x108bd38);
    *(undefined1 *)(iVar2 + 0x1d) = 1;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c
              (iVar2,1,*(undefined4 *)(*(int *)(*piVar14 + 0x5c) + 8),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_TriggeredOfferPresenter__ShowNext_107be88(*(undefined4 *)(iVar1 + 8));
  }
  return;
}

