/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntryContainer$$Initialize
void Rotatelab_Networking_UI_HiroRewardUIEntryContainer__Initialize (Rotatelab_Networking_UI_HiroRewardUIEntryContainer_o* __this, Hiro_IReward_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fff8a0) */
/* WARNING: Removing unreachable block (ram,0x00fff890) */
/* WARNING: Removing unreachable block (ram,0x00fff270) */
/* WARNING: Removing unreachable block (ram,0x00fff578) */
/* WARNING: Removing unreachable block (ram,0x00fffe98) */
/* WARNING: Removing unreachable block (ram,0x00fffea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntryContainer$$Initialize
   void Rotatelab_Networking_UI_HiroRewardUIEntryContainer__Initialize
   (Rotatelab_Networking_UI_HiroRewardUIEntryContainer_o* __this, Hiro_IReward_o* data, const
   MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardUIEntryContainer__Initialize_feed34(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int **ppiStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  pcVar13 = (char *)(_UNK_00fffd28 + 0xffed50);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd2c + 0xffed64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd30 + 0xffed70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd34 + 0xffed7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd38 + 0xffed88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd3c + 0xffed94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd40 + 0xffeda0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd44 + 0xffedac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd48 + 0xffedb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd4c + 0xffedc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffd50 + 0xffedd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffdd0 + 0xffeddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffdd4 + 0xffede8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffdd8 + 0xffedf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffddc + 0xffee00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffde0 + 0xffee0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffde4 + 0xffee18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffde8 + 0xffee24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffdec + 0xffee30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffdf0 + 0xffee3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffdf4 + 0xffee48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffdf8 + 0xffee54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffdfc + 0xffee60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffe64 + 0xffee6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffe68 + 0xffee78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fffe6c + 0xffee84));
    *pcVar13 = '\x01';
  }
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  piStack_30 = (int *)0x0;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_2;
  piVar14 = *(int **)(_UNK_00fffe70 + 0xffeec0);
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == *piVar14) {
        puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xe8);
        goto LAB_00ffef08;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar14,5);
LAB_00ffef08:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if (iVar1 != 0) {
    if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xe8);
          goto LAB_00ffef7c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar14,5);
LAB_00ffef7c:
    piVar14 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar14;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_00ffffa4 + 0xffefac)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_00ffeff8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar14,**(int **)(_UNK_00ffffa4 + 0xffefac),0);
LAB_00ffeff8:
    piStack_28 = (int *)(*(code *)*puVar2)(piVar14,puVar2[1]);
    ppiStack_34 = &piStack_28;
    uStack_38 = 0;
    piVar14 = *(int **)(_UNK_0100001c + 0xfff030);
    puVar2 = *(undefined4 **)(_UNK_0100002c + 0xfff038);
    puVar15 = *(undefined4 **)(_UNK_01000030 + 0xfff040);
    do {
      piVar9 = piStack_28;
      if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piStack_28;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == *piVar14) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_00fff09c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar14,0);
LAB_00fff09c:
      iVar1 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      piVar9 = piStack_28;
      if (iVar1 == 0) {
        if (piStack_28 == (int *)0x0) goto LAB_00fff268;
        iVar1 = *piStack_28;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 == 0) goto LAB_00fff23c;
        piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        goto LAB_00fff224;
      }
      if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piStack_28;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01000094 + 0xfff0d4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_00fff11c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_01000094 + 0xfff0d4),0);
LAB_00fff11c:
      (*(code *)*puVar3)(&uStack_40,piVar9,puVar3[1]);
      iVar1 = iStack_3c;
      uVar6 = uStack_40;
      iVar4 = System_String__op_Equality_2a0975c(uStack_40,*puVar2,0);
      if (iVar4 != 0) {
        if (*(int *)(**(int **)(_UNK_01000098 + 0xfff15c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
        lVar16 = System_Int64__Parse_2b6dbbc(iVar1,uVar5,0);
        if (lVar16 == 1) {
          *(undefined1 *)(param_1 + 0x24) = 1;
        }
      }
      iVar4 = System_String__op_Equality_2a0975c(uVar6,*puVar15,0);
      if (iVar4 == 0) {
        iVar4 = System_String__op_Equality_2a0975c
                          (uVar6,**(undefined4 **)(_UNK_0100009c + 0xfff1bc),0);
        if (iVar4 != 0) {
          *(undefined1 *)(param_1 + 0x25) = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x25) = 1;
      }
      Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry_ff0858(param_1,uVar6,0,iVar1);
    } while( true );
  }
  goto LAB_00fff280;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 2;
    if (uVar7 == 0) break;
LAB_00fff52c:
    if (piVar14[-1] == **(int **)(_UNK_010000b4 + 0xfff518)) {
      puVar2 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
      goto LAB_00fff560;
    }
  }
LAB_00fff544:
  puVar2 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_010000b4 + 0xfff518),0);
LAB_00fff560:
  (*(code *)*puVar2)(piVar10,puVar2[1]);
LAB_00fff570:
  piVar14 = *(int **)(_UNK_010000b8 + 0xfff58c);
  goto LAB_00fff588;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 2;
    if (uVar7 == 0) break;
LAB_00fff844:
    if (piVar14[-1] == **(int **)(_UNK_010000c8 + 0xfff830)) {
      puVar2 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
      goto LAB_00fff878;
    }
  }
LAB_00fff85c:
  puVar2 = (undefined4 *)FUN_00efdb38(piStack_2c,**(int **)(_UNK_010000c8 + 0xfff830),0);
LAB_00fff878:
  (*(code *)*puVar2)(piVar10,puVar2[1]);
LAB_00fff888:
  piVar14 = *(int **)(_UNK_010000cc + 0xfff8ac);
  goto LAB_00fff8ac;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 2;
    if (uVar7 == 0) break;
LAB_00fffe3c:
    if (piVar14[-1] == **(int **)(_UNK_010000f4 + 0xfffe28)) {
      puVar2 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
      goto LAB_00fffe80;
    }
  }
LAB_00fffe54:
  puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_010000f4 + 0xfffe28),0);
LAB_00fffe80:
  (*(code *)*puVar2)(piVar11,puVar2[1]);
  goto LAB_00fffeac;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 2;
    if (uVar7 == 0) break;
LAB_00fff224:
    if (piVar14[-1] == **(int **)(_UNK_010000a0 + 0xfff210)) {
      puVar2 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
      goto LAB_00fff258;
    }
  }
LAB_00fff23c:
  puVar2 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_010000a0 + 0xfff210),0);
LAB_00fff258:
  (*(code *)*puVar2)(piVar9,puVar2[1]);
LAB_00fff268:
  piVar14 = *(int **)(_UNK_010000a4 + 0xfff284);
LAB_00fff280:
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_2;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == *piVar14) {
        puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xe0);
        goto LAB_00fff2dc;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar14,4);
LAB_00fff2dc:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if (iVar1 != 0) {
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xe0);
          goto LAB_00fff344;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar14,4);
LAB_00fff344:
    piVar14 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar14;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_010000a8 + 0xfff374)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_00fff3bc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar14,**(int **)(_UNK_010000a8 + 0xfff374),0);
LAB_00fff3bc:
    piStack_28 = (int *)(*(code *)*puVar2)(piVar14,puVar2[1]);
    ppiStack_34 = &piStack_28;
    uStack_38 = 0;
    piVar14 = *(int **)(_UNK_010000ac + 0xfff3f0);
    piVar9 = *(int **)(_UNK_010000b0 + 0xfff3f8);
    do {
      piVar10 = piStack_28;
      if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piStack_28;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == *piVar14) {
            puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_00fff454;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar14,0);
LAB_00fff454:
      iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
      piVar10 = piStack_28;
      if (iVar1 == 0) {
        if (piStack_28 == (int *)0x0) goto LAB_00fff570;
        iVar1 = *piStack_28;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 == 0) goto LAB_00fff544;
        piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        goto LAB_00fff52c;
      }
      if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piStack_28;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == *piVar9) {
            puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_00fff4cc;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar9,0);
LAB_00fff4cc:
      (*(code *)*puVar2)(&uStack_40,piVar10,puVar2[1]);
      Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry_ff0858
                (param_1,uStack_40,1,iStack_3c);
    } while( true );
  }
LAB_00fff588:
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_2;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == *piVar14) {
        puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xf0);
        goto LAB_00fff5e4;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar14,6);
LAB_00fff5e4:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if (iVar1 != 0) {
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xf0);
          goto LAB_00fff64c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar14,6);
LAB_00fff64c:
    piVar14 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar14;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_010000bc + 0xfff67c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_00fff6c4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar14,**(int **)(_UNK_010000bc + 0xfff67c),0);
LAB_00fff6c4:
    piStack_2c = (int *)(*(code *)*puVar2)(piVar14,puVar2[1]);
    ppiStack_34 = &piStack_2c;
    uStack_38 = 0;
    piVar14 = *(int **)(_UNK_010000c0 + 0xfff6f8);
    piVar9 = *(int **)(_UNK_010000c4 + 0xfff700);
    do {
      piVar10 = piStack_2c;
      if (piStack_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piStack_2c;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == *piVar14) {
            puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_00fff75c;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_2c,*piVar14,0);
LAB_00fff75c:
      iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
      piVar10 = piStack_2c;
      if (iVar1 == 0) {
        if (piStack_2c == (int *)0x0) goto LAB_00fff888;
        iVar1 = *piStack_2c;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 == 0) goto LAB_00fff85c;
        piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        goto LAB_00fff844;
      }
      if (piStack_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piStack_2c;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == *piVar9) {
            puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_00fff7d4;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_2c,*piVar9,0);
LAB_00fff7d4:
      (*(code *)*puVar2)(&uStack_40,piVar10,puVar2[1]);
      Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry_ff08f4
                (param_1,uStack_40,2,iStack_3c >> 0x1f,iStack_3c,iStack_3c >> 0x1f);
    } while( true );
  }
LAB_00fff8ac:
  iVar1 = *param_2;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == *piVar14) {
        puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
        goto LAB_00fff8fc;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar14,0);
LAB_00fff8fc:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if (iVar1 != 0) {
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_00fff964;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar14,0);
LAB_00fff964:
    piVar14 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar14;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_010000d0 + 0xfff994)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_00fff9dc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar14,**(int **)(_UNK_010000d0 + 0xfff994),0);
LAB_00fff9dc:
    piStack_30 = (int *)(*(code *)*puVar2)(piVar14,puVar2[1]);
    ppiStack_34 = &piStack_30;
    uStack_38 = 0;
    piVar10 = *(int **)(_UNK_010000d4 + 0xfffa10);
    piVar14 = *(int **)(_UNK_010000d8 + 0xfffa18);
    piVar9 = *(int **)(_UNK_010000dc + 0xfffa20);
    puVar2 = *(undefined4 **)(_UNK_010000e0 + 0xfffa28);
    do {
      piVar11 = piStack_30;
      if (piStack_30 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piStack_30;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == *piVar10) {
            puVar15 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_00fffa80;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar7 != 0);
      }
      puVar15 = (undefined4 *)FUN_00efdb38(piStack_30,*piVar10,0);
LAB_00fffa80:
      iVar1 = (*(code *)*puVar15)(piVar11,puVar15[1]);
      piVar11 = piStack_30;
      if (iVar1 == 0) {
        if (piStack_30 == (int *)0x0) break;
        iVar1 = *piStack_30;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 == 0) goto LAB_00fffe54;
        piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        goto LAB_00fffe3c;
      }
      if (piStack_30 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piStack_30;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_010000e4 + 0xfffab8)) {
            puVar15 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_00fffb00;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar7 != 0);
      }
      puVar15 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_010000e4 + 0xfffab8),0);
LAB_00fffb00:
      piVar11 = (int *)(*(code *)*puVar15)(piVar11,puVar15[1]);
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar11;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == *piVar14) {
            puVar15 = (undefined4 *)(iVar1 + *piVar12 * 8 + 200);
            goto LAB_00fffb70;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar7 != 0);
      }
      puVar15 = (undefined4 *)FUN_00efdb38(piVar11,*piVar14,1);
LAB_00fffb70:
      uVar6 = (*(code *)*puVar15)(piVar11,puVar15[1]);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = Rotatelab_Extensions__EqualsIgnoreCase_fc18b0(uVar6,*puVar2,0);
      iVar8 = *piVar11;
      iVar4 = *piVar14;
      uVar7 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (iVar1 == 0) {
        if (uVar7 != 0) {
          piVar12 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar4) {
              puVar15 = (undefined4 *)(iVar8 + *piVar12 * 8 + 0xc0);
              goto LAB_00fffc9c;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar7 != 0);
        }
        puVar15 = (undefined4 *)FUN_00efdb38(piVar11,iVar4,0);
LAB_00fffc9c:
        uVar6 = (*(code *)*puVar15)(piVar11,puVar15[1]);
        iVar1 = *piVar11;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar12[-1] == *piVar14) {
              puVar15 = (undefined4 *)(iVar1 + *piVar12 * 8 + 200);
              goto LAB_00fffd60;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar7 != 0);
        }
        puVar15 = (undefined4 *)FUN_00efdb38(piVar11,*piVar14,1);
LAB_00fffd60:
        uVar5 = (*(code *)*puVar15)(piVar11,puVar15[1]);
        uVar6 = System_String__Concat_2a0bdec
                          (**(undefined4 **)(_UNK_010000ec + 0xfffd8c),uVar6,
                           **(undefined4 **)(_UNK_010000e8 + 0xfffd80),uVar5,0);
        if (*(int *)(**(int **)(_UNK_010000f0 + 0xfffdac) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__LogError_35b238c(uVar6,0);
      }
      else {
        if (uVar7 != 0) {
          piVar12 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar4) {
              puVar15 = (undefined4 *)(iVar8 + *piVar12 * 8 + 0xc0);
              goto LAB_00fffc38;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar7 != 0);
        }
        puVar15 = (undefined4 *)FUN_00efdb38(piVar11,iVar4,0);
LAB_00fffc38:
        uVar6 = (*(code *)*puVar15)(piVar11,puVar15[1]);
        iVar1 = *piVar11;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar12[-1] == *piVar14) {
              puVar15 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xd0);
              goto LAB_00fffd00;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar7 != 0);
        }
        puVar15 = (undefined4 *)FUN_00efdb38(piVar11,*piVar14,2);
LAB_00fffd00:
        (*(code *)*puVar15)(piVar11,puVar15[1]);
        Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry_ff08f4(param_1,uVar6,3);
      }
    } while( true );
  }
LAB_00fffeac:
  iVar1 = *(int *)(param_1 + 0x20);
  puVar2 = *(undefined4 **)(_UNK_010000f8 + 0xfffebc);
  while( true ) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) <= iVar1) {
      if (1 < *(int *)(param_1 + 0x20)) {
        *(undefined1 *)(param_1 + 0x24) = 0;
      }
      return;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x1c),iVar1,*puVar2);
    if (iVar4 == 0) break;
    iVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar4,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar4,0,0);
    iVar1 = iVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

