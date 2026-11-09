/* IL2CPP: Rotatelab.Networking.HiroController.<AuthenticateSatoriInBackgroundAsync>d__76$$MoveNext
void Rotatelab_Networking_HiroController__AuthenticateSatoriInBackgroundAsync_d__76__MoveNext (Rotatelab_Networking_HiroController__AuthenticateSatoriInBackgroundAsync_d__76_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01163cec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<AuthenticateSatoriInBackgroundAsync>d__76$$MoveNext
   void Rotatelab_Networking_HiroController__AuthenticateSatoriInBackgroundAsync_d__76__MoveNext
   (Rotatelab_Networking_HiroController__AuthenticateSatoriInBackgroundAsync_d__76_o __this, const
   MethodInfo* method); */

void Rotatelab_Networking_HiroController__AuthenticateSatoriInBackgroundAsync_d__76__MoveNext_1153554
               (uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_44;
  uint *puStack_40;
  uint **ppuStack_3c;
  int aiStack_38 [2];
  int *piStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint *puStack_24;
  
  puStack_24 = param_1;
  pcVar7 = (char *)(_UNK_01163ec8 + 0x1163570);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ecc + 0x1163584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ed0 + 0x1163590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ed4 + 0x116359c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ed8 + 0x11635a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163edc + 0x11635b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ee0 + 0x11635c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ee4 + 0x11635cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ee8 + 0x11635d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163eec + 0x11635e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ef0 + 0x11635f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ef4 + 0x11635fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163ef8 + 0x1163608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163efc + 0x1163614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163f00 + 0x1163620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01163f04 + 0x116362c));
    *pcVar7 = '\x01';
  }
  uStack_28 = *param_1;
  uVar14 = param_1[2];
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  aiStack_38[1] = 0;
  if (uStack_28 == 0) {
LAB_01163934:
    ppuStack_3c = &puStack_24;
    puStack_40 = &uStack_28;
    uStack_44 = 0;
    piStack_30 = (int *)puStack_24[6];
    uStack_2c = puStack_24[7];
    puStack_24[6] = 0;
    puStack_24[7] = 0;
    uStack_28 = 0xffffffff;
    *puStack_24 = 0xffffffff;
LAB_01163990:
    piVar9 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_01163a1c;
    iVar12 = (int)uStack_2c._2_2_;
    iVar3 = *(int *)(**(int **)(_UNK_01163f34 + 0x11639a4) + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 0x14);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768(iVar3);
    }
    iVar4 = *piVar9;
    uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar3) {
          puVar8 = (undefined4 *)(iVar4 + *piVar5 * 8 + 0xc0);
          goto LAB_01163a30;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar1 != 0);
    }
    puVar8 = (undefined4 *)FUN_00efdb38(piVar9,iVar3,0);
LAB_01163a30:
    uVar1 = (*(code *)*puVar8)(piVar9,iVar12,puVar8[1]);
  }
  else {
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01163f08 + 0x1163668));
    System_Object___ctor_2bb93bc(uVar1,0);
    puStack_24[4] = uVar1;
    thunk_FUN_00ec5080(puStack_24 + 4,uVar1);
    uVar1 = puStack_24[2];
    if (puStack_24[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar10 = (uint *)(puStack_24[4] + 8);
    *puVar10 = uVar1;
    thunk_FUN_00ec5080(puVar10,uVar1);
    uVar1 = puStack_24[3];
    if (puStack_24[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar10 = (uint *)(puStack_24[4] + 0xc);
    *puVar10 = uVar1;
    thunk_FUN_00ec5080(puVar10,uVar1);
    if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = *(undefined4 *)(uVar14 + 0x68);
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01163f0c + 0x11636f0));
    Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
              (uVar1,**(undefined4 **)(_UNK_01163f10 + 0x1163704),uVar11,1,0);
    puStack_24[5] = uVar1;
    thunk_FUN_00ec5080(puStack_24 + 5,uVar1);
    ppuStack_3c = &puStack_24;
    puStack_40 = &uStack_28;
    uStack_44 = 0;
    if (uStack_28 == 0) goto LAB_01163934;
    if (puStack_24[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar8 = (undefined4 *)(puStack_24[4] + 0x10);
    *puVar8 = 0;
    thunk_FUN_00ec5080(puVar8,0);
    uVar1 = puStack_24[4];
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01163f14 + 0x116378c));
    System_Func_UniTask____ctor_2395d44(uVar11,uVar1,**(undefined4 **)(_UNK_01163f18 + 0x11637a0),0)
    ;
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01163f1c + 0x11637bc));
    System_Action_object__int____ctor_1f18be8
              (uVar2,uVar14,**(undefined4 **)(_UNK_01163f20 + 0x11637d0),0);
    if (*(int *)(**(int **)(_UNK_01163f24 + 0x11637ec) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Networking_HiroController__ExecuteTask_114cc9c
              (&piStack_50,uVar11,2,uVar2,0x40000000,0,0);
    uVar1 = uStack_4c;
    piVar9 = piStack_50;
    uStack_4c = 0;
    piStack_50 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_01163f28 + 0x1163834) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_50 = piVar9;
    uStack_4c = uVar1;
    thunk_FUN_00ec5080(&piStack_50,0);
    uStack_2c = uStack_4c;
    piStack_30 = piStack_50;
    iVar3 = *(int *)(**(int **)(_UNK_01163f2c + 0x1163870) + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    piVar9 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar12 = (int)uStack_2c._2_2_;
      iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768();
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 4);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      iVar4 = *piVar9;
      uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar4 + *piVar5 * 8 + 200);
            goto LAB_0116396c;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar1 != 0);
      }
      puVar8 = (undefined4 *)FUN_00efdb38(piVar9,iVar3,1);
LAB_0116396c:
      iVar3 = (*(code *)*puVar8)(piVar9,iVar12,puVar8[1]);
      if (iVar3 == 0) {
        uStack_28 = 0;
        *puStack_24 = 0;
        puStack_24[6] = (uint)piStack_30;
        puStack_24[7] = uStack_2c;
        thunk_FUN_00ec5080(puStack_24 + 6,0);
        iVar3 = 5;
        func_0x01173a80(puStack_24 + 1,&piStack_30,puStack_24,
                        **(undefined4 **)(_UNK_01163f30 + 0x1163b54));
        goto LAB_01163c5c;
      }
      goto LAB_01163990;
    }
LAB_01163a1c:
    uVar1 = uStack_2c & 0xff;
  }
  if (uVar1 != 0) {
    if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(uVar14 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = *(int **)(*(int *)(uVar14 + 0x24) + 0x28);
    if (piVar9 != (int *)0x0) {
      uVar1 = (uint)*(byte *)(**(int **)(_UNK_01163f38 + 0x1163a84) + 0xb8);
      if ((uVar1 <= *(byte *)(*piVar9 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar9 + 100) + uVar1 * 4 + -4) ==
          **(int **)(_UNK_01163f38 + 0x1163a84))) {
        if (puStack_24[4] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar5 = *(int **)(puStack_24[4] + 0x10);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *piVar5;
        piVar13 = *(int **)(_UNK_01163f3c + 0x1163ae0);
        uVar1 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar12 = *piVar13;
        if (uVar1 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar12) {
              puVar8 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_01163b74;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar1 != 0);
        }
        puVar8 = (undefined4 *)FUN_00efdb38(piVar5,iVar12,0);
LAB_01163b74:
        uVar11 = (*(code *)*puVar8)(piVar5,puVar8[1]);
        if (puStack_24[4] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar5 = *(int **)(puStack_24[4] + 0x10);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *piVar5;
        iVar12 = *piVar13;
        uVar1 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar1 != 0) {
          piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar13[-1] == iVar12) {
              puVar8 = (undefined4 *)(iVar3 + *piVar13 * 8 + 200);
              goto LAB_01163bfc;
            }
            uVar1 = uVar1 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar1 != 0);
        }
        puVar8 = (undefined4 *)FUN_00efdb38(piVar5,iVar12,1);
LAB_01163bfc:
        uVar2 = (*(code *)*puVar8)(piVar5,puVar8[1]);
        Satori_Session__Update_2d12284(piVar9,uVar11,uVar2,0);
      }
    }
    if (puStack_24[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_HiroController__OnSatoriAuthTokensRefreshed_114b848
              (uVar14,*(undefined4 *)(puStack_24[4] + 0x10));
  }
  iVar3 = 7;
LAB_01163c5c:
  if ((0x7fffffff < uStack_28) && (piVar9 = (int *)(*ppuStack_3c)[5], piVar9 != (int *)0x0)) {
    iVar12 = *piVar9;
    uVar14 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar14 != 0) {
      piVar5 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01163f40 + 0x1163c8c)) {
          puVar8 = (undefined4 *)(iVar12 + *piVar5 * 8 + 0xc0);
          goto LAB_01163cd4;
        }
        uVar14 = uVar14 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_01163f40 + 0x1163c8c),0);
LAB_01163cd4:
    (*(code *)*puVar8)(piVar9,puVar8[1]);
  }
  if (iVar3 == 7) {
    *puStack_24 = 0xfffffffe;
    puStack_24[4] = 0;
    thunk_FUN_00ec5080(puStack_24 + 4,0);
    puStack_24[5] = 0;
    thunk_FUN_00ec5080(puStack_24 + 5,0);
    func_0x00fcef34(puStack_24 + 1,0);
  }
  else if (iVar3 == 0) {
    iVar3 = aiStack_38[aiStack_38[1] + -1];
    *puStack_24 = 0xfffffffe;
    puStack_24[4] = 0;
    thunk_FUN_00ec5080(puStack_24 + 4,0);
    puStack_24[5] = 0;
    thunk_FUN_00ec5080(puStack_24 + 5,0);
    func_0x00fcede8(puStack_24 + 1,iVar3,0);
  }
  return;
}

