/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$Start
void Rotatelab_Boosters_BoosterGenerator__Start (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$Start
   void Rotatelab_Boosters_BoosterGenerator__Start (Rotatelab_Boosters_BoosterGenerator_o* __this,
   const MethodInfo* method); */

void Rotatelab_Boosters_BoosterGenerator__Start_113cb2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  pcVar4 = (char *)(_UNK_0114cdd4 + 0x114cb4c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cdd8 + 0x114cb60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cddc + 0x114cb6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cde0 + 0x114cb78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cde4 + 0x114cb84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cde8 + 0x114cb90));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0114cdec + 0x114cba4);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 4) == '\0') {
    return;
  }
  Rotatelab_Boosters_BoosterGenerator__TryGenerateSpecialBooster_113ce08(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114cdf0 + 0x114cbdc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x14) + 0xc);
  uVar6 = 0;
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar6) {
      iVar3 = *(int *)(param_1 + 0x18);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0114ce00 + 0x114cd34));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x14) + 0xc);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = *(int *)(iVar1 + 0xc) - 2;
      uVar2 = _UNK_0114cdd0;
      if (uVar6 < 3) {
        uVar2 = *(undefined4 *)(_UNK_0114ce04 + 0x114cd88 + uVar6 * 4);
      }
      if (iVar3 != 0) {
        pcVar4 = (char *)(_UNK_039be73c + 0x39be700);
        if (*pcVar4 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039be740 + 0x39be714),uVar2,0);
          *pcVar4 = '\x01';
        }
        iVar9 = **(int **)(_UNK_039be744 + 0x39be730);
        iVar1 = *(int *)(iVar9 + 0x1c);
        if (iVar1 == 0) {
          FUN_00efd7c4(iVar9);
          iVar1 = *(int *)(iVar9 + 0x1c);
        }
        uVar7 = FUN_00ec393c(*(undefined4 *)(iVar1 + 4),&stack0xffffffe4);
        iVar1 = System_Single__Equals_2b84f24
                          ((undefined4 *)(iVar3 + 0x3c),uVar7,
                           *(undefined4 *)(*(int *)(iVar9 + 0x1c) + 8));
        if (iVar1 == 0) {
          *(undefined4 *)(iVar3 + 0x3c) = uVar2;
          UnityEngine_UI_LayoutGroup__SetDirty_39af9d4(iVar3,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    uVar8 = *(undefined4 *)(iVar1 + 0x10 + uVar6 * 4);
    uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (*(int *)(**(int **)(_UNK_0114cdf4 + 0x114cc5c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar7,uVar2,0,**(undefined4 **)(_UNK_0114cdf8 + 0x114cc80));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Boosters_Booster__Initialize_113ae58(iVar3,uVar8);
    iVar9 = *(int *)(param_1 + 0x20);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *(int *)(iVar9 + 8);
    uVar11 = *(uint *)(iVar9 + 0xc);
    piVar5 = *(int **)(_UNK_0114cdfc + 0x114ccd4);
    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
    if (iVar10 == 0) break;
    if (uVar11 < *(uint *)(iVar10 + 0xc)) {
      *(uint *)(iVar9 + 0xc) = uVar11 + 1;
      piVar5 = (int *)(iVar10 + uVar11 * 4 + 0x10);
      *piVar5 = iVar3;
      thunk_FUN_00ec5080(piVar5,iVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar9,iVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
    }
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

