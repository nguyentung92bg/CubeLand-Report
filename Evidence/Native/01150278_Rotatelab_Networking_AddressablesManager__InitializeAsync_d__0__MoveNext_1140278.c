/* IL2CPP: Rotatelab.Networking.AddressablesManager.<InitializeAsync>d__0$$MoveNext
void Rotatelab_Networking_AddressablesManager__InitializeAsync_d__0__MoveNext (Rotatelab_Networking_AddressablesManager__InitializeAsync_d__0_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.AddressablesManager.<InitializeAsync>d__0$$MoveNext
   void Rotatelab_Networking_AddressablesManager__InitializeAsync_d__0__MoveNext
   (Rotatelab_Networking_AddressablesManager__InitializeAsync_d__0_o __this, const MethodInfo*
   method); */

void Rotatelab_Networking_AddressablesManager__InitializeAsync_d__0__MoveNext_1140278(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_0115076c + 0x1150290);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150770 + 0x11502a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150774 + 0x11502b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150778 + 0x11502bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115077c + 0x11502c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150780 + 0x11502d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150784 + 0x11502e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150788 + 0x11502ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115078c + 0x11502f8));
    *pcVar7 = '\x01';
  }
  uStack_30 = 0;
  iStack_28 = 0;
  uStack_34 = 0;
  if (*param_1 == 0) {
    uStack_30 = *(undefined8 *)(param_1 + 3);
    iStack_28 = param_1[5];
    *param_1 = -1;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    piVar8 = (int *)uStack_30;
  }
  else {
    Rotatelab_Networking_AddressablesManager__FixBinaryCatalogHeaderMagicNumber_1140120();
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01150790 + 0x1150330));
    System_Action_AsyncOperationHandle__object____ctor_1f17cc4
              (uVar1,0,**(undefined4 **)(_UNK_01150794 + 0x1150344),0);
    piVar8 = *(int **)(_UNK_01150798 + 0x1150360);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar7 = (char *)(_UNK_0115079c + 0x115037c);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011507a0 + 0x1150390));
      *pcVar7 = '\x01';
    }
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    **(undefined4 **)(iVar2 + 0x5c) = uVar1;
    thunk_FUN_00ec5080(*(undefined4 *)(*piVar8 + 0x5c),uVar1);
    if (*(int *)(**(int **)(_UNK_011507a4 + 0x11503d4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_AddressableAssets_Addressables__InitializeAsync_32384a0(&uStack_48,0);
    Cysharp_Threading_Tasks_AddressablesAsyncExtensions__GetAwaiter_object__13a1030
              (&uStack_48,uStack_48,uStack_44,iStack_40,**(undefined4 **)(_UNK_011507a8 + 0x1150404)
              );
    uStack_30 = CONCAT44(uStack_44,uStack_48);
    iStack_28 = iStack_40;
    iVar2 = *(int *)(**(int **)(_UNK_011507ac + 0x1150424) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    piVar8 = (int *)uStack_30;
    if ((int *)uStack_30 == (int *)0x0) goto LAB_0115060c;
    iVar9 = (int)(short)iStack_28;
    iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0xc) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar3 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar2) {
          puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 200);
          goto LAB_01150504;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar8,iVar2,1);
LAB_01150504:
    iVar2 = (*(code *)*puVar4)(piVar8,iVar9,puVar4[1]);
    if (iVar2 == 0) {
      *param_1 = 0;
      param_1[5] = iStack_28;
      *(undefined8 *)(param_1 + 3) = uStack_30;
      thunk_FUN_00ec5080(param_1 + 3);
      func_0x01150a18(param_1 + 1,&uStack_30,param_1,**(undefined4 **)(_UNK_011507b0 + 0x11505d8));
      return;
    }
  }
  if (piVar8 != (int *)0x0) {
    iVar9 = (int)(short)iStack_28;
    iVar2 = *(int *)(**(int **)(_UNK_011507b4 + 0x1150534) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x14);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar3 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar2) {
          puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_011505f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar8,iVar2,0);
LAB_011505f8:
    (*(code *)*puVar4)(piVar8,iVar9,puVar4[1]);
  }
LAB_0115060c:
  iVar2 = _UNK_011507b8;
  *param_1 = -2;
  if (*(char *)(iVar2 + 0x1150620) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011507bc + 0x1150634));
    *(char *)(iVar2 + 0x1150620) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_011507c0 + 0x1150658)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd0);
          goto LAB_011506a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_011507c0 + 0x1150658),2);
LAB_011506a0:
    (*(code *)*puVar4)(piVar8,puVar4[1]);
  }
  return;
}

