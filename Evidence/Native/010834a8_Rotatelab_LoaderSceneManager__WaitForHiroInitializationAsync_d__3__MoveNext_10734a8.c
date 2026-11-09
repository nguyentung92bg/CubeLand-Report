/* IL2CPP: Rotatelab.LoaderSceneManager.<WaitForHiroInitializationAsync>d__3$$MoveNext
void Rotatelab_LoaderSceneManager__WaitForHiroInitializationAsync_d__3__MoveNext (Rotatelab_LoaderSceneManager__WaitForHiroInitializationAsync_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01083978) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.LoaderSceneManager.<WaitForHiroInitializationAsync>d__3$$MoveNext
   void Rotatelab_LoaderSceneManager__WaitForHiroInitializationAsync_d__3__MoveNext
   (Rotatelab_LoaderSceneManager__WaitForHiroInitializationAsync_d__3_o __this, const MethodInfo*
   method); */

void Rotatelab_LoaderSceneManager__WaitForHiroInitializationAsync_d__3__MoveNext_10734a8
               (uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_44;
  uint *puStack_40;
  uint **ppuStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint *puStack_24;
  
  pcVar6 = (char *)(_UNK_01083ac8 + 0x10834c4);
  puStack_24 = param_1;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083acc + 0x10834d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083ad0 + 0x10834e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083ad4 + 0x10834f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083ad8 + 0x10834fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083adc + 0x1083508));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083ae0 + 0x1083514));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083ae4 + 0x1083520));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083ae8 + 0x108352c));
    *pcVar6 = '\x01';
  }
  uStack_28 = *param_1;
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  if (uStack_28 == 0) {
LAB_01083794:
    ppuStack_3c = &puStack_24;
    puStack_40 = &uStack_28;
    uStack_44 = 0;
    piStack_30 = (int *)puStack_24[4];
    uStack_2c = puStack_24[5];
    puStack_24[4] = 0;
    puStack_24[5] = 0;
    uStack_28 = 0xffffffff;
    *puStack_24 = 0xffffffff;
  }
  else {
    uVar7 = param_1[2];
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01083af8 + 0x1083568));
    Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
              (uVar1,**(undefined4 **)(_UNK_01083afc + 0x108357c),uVar7,1,0);
    puStack_24[3] = uVar1;
    thunk_FUN_00ec5080(puStack_24 + 3,uVar1);
    ppuStack_3c = &puStack_24;
    puStack_40 = &uStack_28;
    uStack_44 = 0;
    if (uStack_28 == 0) goto LAB_01083794;
    piVar9 = *(int **)(_UNK_01083b00 + 0x10835d4);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar9;
    }
    puVar3 = *(undefined4 **)(iVar2 + 0x5c);
    iVar5 = puVar3[2];
    if (iVar5 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar9 + 0x5c);
      }
      uVar8 = *puVar3;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01083b04 + 0x1083620));
      System_Func_bool____ctor_23938dc(iVar5,uVar8,**(undefined4 **)(_UNK_01083b08 + 0x1083634),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
      *piVar9 = iVar5;
      thunk_FUN_00ec5080(piVar9,iVar5);
    }
    piVar9 = *(int **)(_UNK_01083b0c + 0x1083664);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_50,iVar5,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_50,0);
    pcVar6 = (char *)(_UNK_01083b10 + 0x10836c0);
    uStack_2c = uStack_4c;
    piStack_30 = piStack_50;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01083b14 + 0x10836e0));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_01083b18 + 0x1083708);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01083b1c + 0x108371c));
      *pcVar6 = '\x01';
    }
    piVar9 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar2 = *piStack_30;
      uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
      iVar5 = (int)(short)uStack_2c;
      if (uVar1 != 0) {
        piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01083b20 + 0x1083740)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xc0);
            goto LAB_010837cc;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_01083b20 + 0x1083740),0);
LAB_010837cc:
      iVar2 = (*(code *)*puVar3)(piVar9,iVar5,puVar3[1]);
      if (iVar2 == 0) {
        uStack_28 = 0;
        *puStack_24 = 0;
        puStack_24[4] = (uint)piStack_30;
        puStack_24[5] = uStack_2c;
        thunk_FUN_00ec5080(puStack_24 + 4,0);
        iVar2 = 6;
        func_0x0109f438(puStack_24 + 1,&piStack_30,puStack_24,
                        **(undefined4 **)(_UNK_01083b24 + 0x1083940));
        goto LAB_0108389c;
      }
    }
  }
  pcVar6 = (char *)(_UNK_01083aec + 0x10837f4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083af0 + 0x1083808));
    *pcVar6 = '\x01';
  }
  piVar9 = piStack_30;
  iVar2 = 7;
  if (piStack_30 != (int *)0x0) {
    iVar5 = *piStack_30;
    uVar1 = (uint)*(ushort *)(iVar5 + 0xb6);
    iVar10 = (int)(short)uStack_2c;
    if (uVar1 != 0) {
      piVar4 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01083af4 + 0x1083838)) {
          puVar3 = (undefined4 *)(iVar5 + *piVar4 * 8 + 0xd0);
          goto LAB_01083884;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_01083af4 + 0x1083838),2);
LAB_01083884:
    (*(code *)*puVar3)(piVar9,iVar10,puVar3[1]);
  }
LAB_0108389c:
  if ((0x7fffffff < uStack_28) && (piVar9 = (int *)(*ppuStack_3c)[3], piVar9 != (int *)0x0)) {
    iVar5 = *piVar9;
    uVar1 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01083b28 + 0x10838cc)) {
          puVar3 = (undefined4 *)(iVar5 + *piVar4 * 8 + 0xc0);
          goto LAB_01083960;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_01083b28 + 0x10838cc),0);
LAB_01083960:
    (*(code *)*puVar3)(piVar9,puVar3[1]);
  }
  if (iVar2 == 7 || iVar2 == 0) {
    puStack_24[3] = 0;
    thunk_FUN_00ec5080();
    *puStack_24 = 0xfffffffe;
    func_0x00fcef34(puStack_24 + 1,0);
  }
  return;
}

