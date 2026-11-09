/* IL2CPP: Rotatelab.UI.UIManager.<WaitUntilUserIsIdleAsync>d__40$$MoveNext
void Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_d__40__MoveNext (Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_d__40_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIManager.<WaitUntilUserIsIdleAsync>d__40$$MoveNext
   void Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_d__40__MoveNext
   (Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_d__40_o __this, const MethodInfo* method); */

void Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_d__40__MoveNext_1128d80(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int *piStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_011393cc + 0x1138d98);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011393d0 + 0x1138dac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011393d4 + 0x1138db8));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  uStack_2c = 0;
  pcVar5 = (char *)(_UNK_011393d8 + 0x1138dec);
  pcVar8 = (char *)(_UNK_011393dc + 0x1138df0);
  pcVar9 = (char *)(_UNK_011393e0 + 0x1138df4);
  if (*param_1 == 0) {
    piStack_28 = (int *)param_1[3];
    iStack_24 = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
    goto LAB_01139010;
  }
  if (*param_1 != 1) goto LAB_01138ee0;
  piStack_28 = (int *)param_1[3];
  iStack_24 = param_1[4];
  *param_1 = -1;
  param_1[3] = 0;
  param_1[4] = 0;
  do {
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011393e4 + 0x1138e58));
      *pcVar5 = '\x01';
    }
    piVar6 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar1 = *piStack_28;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar7 = (int)(short)iStack_24;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_011393e8 + 0x1138e7c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
            goto LAB_01138ec8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_011393e8 + 0x1138e7c),2);
LAB_01138ec8:
      (*(code *)*puVar2)(piVar6,iVar7,puVar2[1]);
    }
LAB_01138ee0:
    iVar7 = Rotatelab_UI_UIManager___WaitUntilUserIsIdleAsync_g__IsUserIdle_40_0_1128a60();
    iVar1 = _UNK_0113941c;
    if (iVar7 != 0) {
      *param_1 = -2;
      if (*(char *)(iVar1 + 0x113922c) == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01139420 + 0x1139240));
        *(char *)(iVar1 + 0x113922c) = '\x01';
      }
      piVar6 = (int *)param_1[1];
      if (piVar6 == (int *)0x0) {
        return;
      }
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 == 0) goto LAB_01139290;
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      break;
    }
    piVar6 = *(int **)(_UNK_011393ec + 0x1138ef8);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__NextFrame_321655c(&piStack_38,0);
    thunk_FUN_00ec5080(&piStack_38,0);
    iStack_24 = iStack_34;
    piStack_28 = piStack_38;
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011393f0 + 0x1138f4c));
      *pcVar8 = '\x01';
    }
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011393f4 + 0x1138f80));
      *pcVar9 = '\x01';
    }
    piVar6 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar1 = *piStack_28;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar7 = (int)(short)iStack_24;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_011393f8 + 0x1138fa4)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_01138ff0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_011393f8 + 0x1138fa4),0);
LAB_01138ff0:
      iVar1 = (*(code *)*puVar2)(piVar6,iVar7,puVar2[1]);
      if (iVar1 == 0) {
        param_1[4] = iStack_24;
        *param_1 = 0;
        param_1[3] = (int)piStack_28;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x011507d8(param_1 + 1,&piStack_28,param_1,**(undefined4 **)(_UNK_011393fc + 0x11392d0)
                       );
        return;
      }
    }
LAB_01139010:
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01139400 + 0x1139028));
      *pcVar5 = '\x01';
    }
    piVar6 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar1 = *piStack_28;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar7 = (int)(short)iStack_24;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01139404 + 0x113904c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
            goto LAB_01139098;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_01139404 + 0x113904c),2);
LAB_01139098:
      (*(code *)*puVar2)(piVar6,iVar7,puVar2[1]);
    }
    piVar6 = *(int **)(_UNK_01139408 + 0x11390bc);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__NextFrame_321655c(&piStack_38,0);
    thunk_FUN_00ec5080(&piStack_38,0);
    iStack_24 = iStack_34;
    piStack_28 = piStack_38;
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0113940c + 0x1139110));
      *pcVar8 = '\x01';
    }
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01139410 + 0x1139144));
      *pcVar9 = '\x01';
    }
    piVar6 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar1 = *piStack_28;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar7 = (int)(short)iStack_24;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01139414 + 0x1139168)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_011391b4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_01139414 + 0x1139168),0);
LAB_011391b4:
      iVar1 = (*(code *)*puVar2)(piVar6,iVar7,puVar2[1]);
      if (iVar1 == 0) {
        param_1[4] = iStack_24;
        *param_1 = 1;
        param_1[3] = (int)piStack_28;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x011507d8(param_1 + 1,&piStack_28,param_1,**(undefined4 **)(_UNK_01139418 + 0x1139204)
                       );
        return;
      }
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 2;
    if (uVar3 == 0) break;
    if (piVar4[-1] == **(int **)(_UNK_01139424 + 0x1139264)) {
      puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
      goto LAB_011392f0;
    }
  }
LAB_01139290:
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_01139424 + 0x1139264),2);
LAB_011392f0:
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}

