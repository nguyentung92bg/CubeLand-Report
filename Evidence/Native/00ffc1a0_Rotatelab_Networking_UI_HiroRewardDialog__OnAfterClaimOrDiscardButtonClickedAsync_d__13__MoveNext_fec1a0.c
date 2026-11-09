/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog.<OnAfterClaimOrDiscardButtonClickedAsync>d__13$$MoveNext
void Rotatelab_Networking_UI_HiroRewardDialog__OnAfterClaimOrDiscardButtonClickedAsync_d__13__MoveNext (Rotatelab_Networking_UI_HiroRewardDialog__OnAfterClaimOrDiscardButtonClickedAsync_d__13_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.UI.HiroRewardDialog.<OnAfterClaimOrDiscardButtonClickedAsync>d__13$$MoveNext
   void 
   Rotatelab_Networking_UI_HiroRewardDialog__OnAfterClaimOrDiscardButtonClickedAsync_d__13__MoveNext
   (Rotatelab_Networking_UI_HiroRewardDialog__OnAfterClaimOrDiscardButtonClickedAsync_d__13_o
   __this, const MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardDialog__OnAfterClaimOrDiscardButtonClickedAsync_d__13__MoveNext_fec1a0
               (int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  uint uStack_2c;
  
  pcVar9 = (char *)(_UNK_00ffc680 + 0xffc1b8);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc684 + 0xffc1cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc688 + 0xffc1d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc68c + 0xffc1e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc690 + 0xffc1f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc694 + 0xffc1fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc698 + 0xffc208));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc69c + 0xffc214));
    *pcVar9 = '\x01';
  }
  iVar10 = param_1[3];
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  if (*param_1 == 0) {
    uStack_2c = param_1[5];
    piVar7 = (int *)param_1[4];
    *param_1 = -1;
    uVar5 = uStack_2c >> 0x10;
    param_1[4] = 0;
    param_1[5] = 0;
    piStack_30 = piVar7;
  }
  else {
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ffc6a0 + 0xffc248));
    System_Func_UniTask____ctor_2395d44(uVar1,iVar10,**(undefined4 **)(_UNK_00ffc6a4 + 0xffc25c),0);
    if (*(int *)(**(int **)(_UNK_00ffc6a8 + 0xffc278) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Networking_HiroController__ExecuteTask_114cc9c
              (&piStack_40,uVar1,0x7fffffff,0,0x40000000,0,0,0);
    uVar5 = uStack_3c;
    piVar7 = piStack_40;
    uStack_3c = 0;
    piStack_40 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_00ffc6ac + 0xffc2c4) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_40 = piVar7;
    uStack_3c = uVar5;
    thunk_FUN_00ec5080(&piStack_40,0);
    uStack_2c = uStack_3c;
    piStack_30 = piStack_40;
    iVar2 = *(int *)(**(int **)(_UNK_00ffc6b0 + 0xffc300) + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    if (piStack_40 == (int *)0x0) goto LAB_00ffc4e0;
    iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0xc) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar3 = *piStack_40;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar2) {
          puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 200);
          goto LAB_00ffc3dc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piStack_40,iVar2,1);
LAB_00ffc3dc:
    uVar5 = (int)uStack_3c >> 0x10;
    iVar2 = (*(code *)*puVar4)(piStack_40,uVar5,puVar4[1]);
    piVar7 = piStack_40;
    if (iVar2 == 0) {
      param_1[5] = uStack_3c;
      *param_1 = 0;
      param_1[4] = (int)piStack_40;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x0101271c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00ffc6b4 + 0xffc4ac));
      return;
    }
  }
  if (piVar7 != (int *)0x0) {
    iVar2 = *(int *)(**(int **)(_UNK_00ffc6b8 + 0xffc410) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x14);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar3 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar2) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_00ffc4cc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar7,iVar2,0);
LAB_00ffc4cc:
    (*(code *)*puVar4)(piVar7,(int)(short)uVar5,puVar4[1]);
  }
LAB_00ffc4e0:
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar10 + 0x28) = 0;
  thunk_FUN_00ec5080();
  if (*(int *)(iVar10 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Cysharp_Threading_Tasks_UniTaskCompletionSource__TrySetResult_3212eac(*(int *)(iVar10 + 0x2c),0);
  iVar10 = _UNK_00ffc6bc;
  *param_1 = -2;
  if (*(char *)(iVar10 + 0xffc52c) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc6c0 + 0xffc540));
    *(char *)(iVar10 + 0xffc52c) = '\x01';
  }
  piVar7 = (int *)param_1[1];
  if (piVar7 != (int *)0x0) {
    iVar10 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_00ffc6c4 + 0xffc564)) {
          puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xd0);
          goto LAB_00ffc5ac;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_00ffc6c4 + 0xffc564),2);
LAB_00ffc5ac:
    (*(code *)*puVar4)(piVar7,puVar4[1]);
  }
  return;
}

