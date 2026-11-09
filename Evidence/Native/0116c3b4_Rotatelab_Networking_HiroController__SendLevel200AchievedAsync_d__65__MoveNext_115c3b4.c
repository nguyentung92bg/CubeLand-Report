/* IL2CPP: Rotatelab.Networking.HiroController.<SendLevel200AchievedAsync>d__65$$MoveNext
void Rotatelab_Networking_HiroController__SendLevel200AchievedAsync_d__65__MoveNext (Rotatelab_Networking_HiroController__SendLevel200AchievedAsync_d__65_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<SendLevel200AchievedAsync>d__65$$MoveNext
   void Rotatelab_Networking_HiroController__SendLevel200AchievedAsync_d__65__MoveNext
   (Rotatelab_Networking_HiroController__SendLevel200AchievedAsync_d__65_o __this, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__SendLevel200AchievedAsync_d__65__MoveNext_115c3b4
               (int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piStack_48;
  uint uStack_44;
  undefined4 uStack_3c;
  int *piStack_38;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  
  pcVar9 = (char *)(_UNK_0116ca94 + 0x116c3cc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116ca98 + 0x116c3e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116ca9c + 0x116c3ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116caa0 + 0x116c3f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116caa4 + 0x116c404));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116caa8 + 0x116c410));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116caac + 0x116c41c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116cab0 + 0x116c428));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116cab4 + 0x116c434));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116cab8 + 0x116c440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116cabc + 0x116c44c));
    *pcVar9 = '\x01';
  }
  piVar7 = param_1 + 3;
  iVar10 = param_1[2];
  piVar8 = param_1 + 5;
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  if (*param_1 == 0) {
    piVar12 = (int *)*piVar7;
    uStack_2c = param_1[4];
    uVar5 = uStack_2c & 0xff;
    uVar11 = uStack_2c >> 0x10;
    *param_1 = -1;
    *piVar7 = 0;
    param_1[4] = 0;
    piStack_30 = piVar12;
LAB_0116c674:
    if (piVar12 != (int *)0x0) {
      iVar10 = *(int *)(**(int **)(_UNK_0116cad8 + 0x116c688) + 0x10);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768();
      }
      iVar10 = *(int *)(*(int *)(iVar10 + 0x60) + 0x14);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768(iVar10);
      }
      iVar3 = *piVar12;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar10) {
            puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
            goto LAB_0116c714;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar12,iVar10,0);
LAB_0116c714:
      uVar5 = (*(code *)*puVar4)(piVar12,(int)(short)uVar11,puVar4[1]);
    }
joined_r0x0116c730:
    if (uVar5 == 0) goto LAB_0116c970;
    iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_0116cadc + 0x116c740));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_10747f4(&piStack_48,iVar10,0);
    piVar7 = *(int **)(_UNK_0116cae0 + 0x116c770);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_48,0);
    pcVar9 = (char *)(_UNK_0116cae4 + 0x116c7ac);
    uStack_34 = uStack_44;
    piStack_38 = piStack_48;
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0116cae8 + 0x116c7cc));
      *pcVar9 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar9 = (char *)(_UNK_0116caec + 0x116c7f4);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0116caf0 + 0x116c808));
      *pcVar9 = '\x01';
    }
    uVar11 = (uint)(short)uStack_44;
    if (piStack_48 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      iVar10 = *piStack_48;
      uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_0116caf4 + 0x116c82c)) {
            puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
            goto LAB_0116c8b4;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_48,**(int **)(_UNK_0116caf4 + 0x116c82c),0);
LAB_0116c8b4:
      iVar10 = (*(code *)*puVar4)(piStack_48,uVar11,puVar4[1]);
      piVar7 = piStack_48;
      if (iVar10 == 0) {
        *piVar8 = (int)piStack_48;
        param_1[6] = uStack_44;
        *param_1 = 1;
        thunk_FUN_00ec5080(piVar8,0);
        func_0x01174a4c(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_0116caf8 + 0x116c9b0)
                       );
        return;
      }
    }
  }
  else {
    if (*param_1 != 1) {
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0116cac0 + 0x116c4e4));
      System_Func_UniTask____ctor_2395d44
                (uVar2,iVar10,**(undefined4 **)(_UNK_0116cac4 + 0x116c4f8),0);
      if (*(int *)(**(int **)(_UNK_0116cac8 + 0x116c514) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Networking_HiroController__ExecuteTask_114cc9c(&piStack_48,uVar2,3,0,0x40000000,0,0)
      ;
      uVar11 = uStack_44;
      piVar12 = piStack_48;
      uStack_44 = 0;
      piStack_48 = (int *)0x0;
      if ((*(byte *)(*(int *)(**(int **)(_UNK_0116cacc + 0x116c55c) + 0x10) + 0xbd) & 1) == 0) {
        FUN_00efd768();
      }
      piStack_48 = piVar12;
      uStack_44 = uVar11;
      thunk_FUN_00ec5080(&piStack_48,0);
      uVar1 = uStack_44;
      piVar12 = piStack_48;
      uStack_2c = uStack_44;
      piStack_30 = piStack_48;
      iVar10 = *(int *)(**(int **)(_UNK_0116cad0 + 0x116c598) + 0x10);
      if ((*(byte *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768();
      }
      uVar5 = uVar1 & 0xff;
      if (piVar12 != (int *)0x0) {
        iVar10 = *(int *)(*(int *)(*(int *)(iVar10 + 0x60) + 0xc) + 0x10);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = FUN_00efd768();
        }
        iVar10 = *(int *)(*(int *)(iVar10 + 0x60) + 4);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = FUN_00efd768(iVar10);
        }
        iVar3 = *piVar12;
        uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar11 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar10) {
              puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 200);
              goto LAB_0116c650;
            }
            uVar11 = uVar11 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piVar12,iVar10,1);
LAB_0116c650:
        uVar11 = (int)uVar1 >> 0x10;
        iVar10 = (*(code *)*puVar4)(piVar12,uVar11,puVar4[1]);
        if (iVar10 == 0) {
          *piVar7 = (int)piVar12;
          param_1[4] = uVar1;
          *param_1 = 0;
          thunk_FUN_00ec5080(piVar7,0);
          func_0x0117492c(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_0116cad4 + 0x116c894));
          return;
        }
        goto LAB_0116c674;
      }
      goto joined_r0x0116c730;
    }
    piStack_38 = (int *)*piVar8;
    uVar11 = param_1[6];
    *param_1 = -1;
    *piVar8 = 0;
    param_1[6] = 0;
    piVar7 = piStack_38;
    uStack_34 = uVar11;
  }
  pcVar9 = (char *)(_UNK_0116cafc + 0x116c8e0);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116cb00 + 0x116c8f4));
    *pcVar9 = '\x01';
  }
  if (piVar7 != (int *)0x0) {
    iVar10 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0116cb04 + 0x116c914)) {
          puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xd0);
          goto LAB_0116c95c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_0116cb04 + 0x116c914),2);
LAB_0116c95c:
    (*(code *)*puVar4)(piVar7,(int)(short)uVar11,puVar4[1]);
  }
LAB_0116c970:
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

