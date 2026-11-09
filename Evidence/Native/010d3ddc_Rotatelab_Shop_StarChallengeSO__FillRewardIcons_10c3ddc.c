/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$FillRewardIcons
void Rotatelab_Shop_StarChallengeSO__FillRewardIcons (Rotatelab_Shop_StarChallengeSO_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010d41f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$FillRewardIcons
   void Rotatelab_Shop_StarChallengeSO__FillRewardIcons (Rotatelab_Shop_StarChallengeSO_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeSO__FillRewardIcons_10c3ddc(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  int **ppiVar17;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  uint uStack_40;
  int *piStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar11 = (char *)(_UNK_010d42e4 + 0x10d3df4);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d42e8 + 0x10d3e08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d42ec + 0x10d3e14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d42f0 + 0x10d3e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d42f4 + 0x10d3e2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d42f8 + 0x10d3e38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d42fc + 0x10d3e44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4300 + 0x10d3e50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4304 + 0x10d3e5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4308 + 0x10d3e68));
    *pcVar11 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piStack_3c = (int *)0x0;
  iStack_38 = 0;
  uStack_40 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&iStack_50,*(int *)(param_1 + 0xc),**(undefined4 **)(_UNK_010d430c + 0x10d3eac));
  iStack_38 = iStack_50;
  uStack_34 = puStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  iStack_50 = 0;
  piVar15 = *(int **)(_UNK_010d4310 + 0x10d3ed4);
  piVar14 = *(int **)(_UNK_010d4314 + 0x10d3edc);
  piVar13 = *(int **)(_UNK_010d4318 + 0x10d3ee4);
  puStack_4c = &iStack_38;
LAB_010d3ee0:
  iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                    (&iStack_38,**(undefined4 **)(_UNK_010d4324 + 0x10d3eec));
  iVar4 = iStack_50;
  if (iVar2 == 0) {
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (puStack_4c,**(undefined4 **)(_UNK_010d4328 + 0x10d4264));
    if (iVar4 != 0) {
      FUN_00ec3a6c(iVar4);
    }
    return;
  }
  if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iStack_2c + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = (int *)Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_10c432c
                            (*(int *)(iStack_2c + 0xc));
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *piVar3;
  uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_010d431c + 0x10d3f44)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
        goto LAB_010d3f8c;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piVar3,**(int **)(_UNK_010d431c + 0x10d3f44),0);
LAB_010d3f8c:
  piStack_3c = (int *)(*(code *)*puVar5)(piVar3,puVar5[1]);
  ppiVar17 = &piStack_3c;
  uVar16 = 0;
  do {
    piVar3 = piStack_3c;
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *piStack_3c;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar15) {
          puVar5 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
          goto LAB_010d4010;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piStack_3c,*piVar15,0);
LAB_010d4010:
    iVar4 = (*(code *)*puVar5)(piVar3,puVar5[1],(code *)*puVar5,puVar5[1],uVar16,ppiVar17);
    piVar3 = piStack_3c;
    if (iVar4 == 0) break;
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *piStack_3c;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar14) {
          puVar5 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
          goto LAB_010d4088;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piStack_3c,*piVar14,0);
LAB_010d4088:
    iVar4 = (*(code *)*puVar5)(piVar3,puVar5[1]);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Shop_StarChallengeSO__GetRewardType_10c39c8
                      (param_1,*(undefined4 *)(iVar4 + 0xc));
    if (iVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(iVar2 + 0xc);
    }
    *(undefined4 *)(iVar4 + 0x10) = uVar7;
    thunk_FUN_00ec5080();
    if (*(int *)(iVar4 + 0xc) == 5) {
      uVar8 = *(uint *)(iVar4 + 0x18);
      uVar12 = *(uint *)(iVar4 + 0x1c);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar1 = (int)uVar12 >> 0x1f;
      uVar8 = uVar8 ^ uVar1;
      uVar7 = Rotatelab_Shop_StarChallengeSO__GetInfiniteHeartText_10c43b0
                        (uVar8 - uVar1,(uVar12 ^ uVar1) - (uVar1 + (uVar8 < uVar1)));
    }
    else {
      if (iVar2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(iVar2 + 0x10);
      }
      uStack_40 = FUN_00f88368(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
      uStack_40 = uStack_40 & 0x7fffffff;
      uVar6 = System_Single__ToString_2b8501c(&uStack_40,0);
      if (iVar2 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(iVar2 + 0x14);
      }
      uVar7 = System_String__Concat_2a0b574(uVar7,uVar6,uVar9,0);
    }
    *(undefined4 *)(iVar4 + 0x20) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(iVar4 + 0x20));
  } while( true );
  if (piStack_3c != (int *)0x0) {
    iVar4 = *piStack_3c;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_010d4320 + 0x10d4194)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
          goto LAB_010d41dc;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piStack_3c,**(int **)(_UNK_010d4320 + 0x10d4194),0);
LAB_010d41dc:
    (*(code *)*puVar5)(piVar3,puVar5[1]);
  }
  goto LAB_010d3ee0;
}

