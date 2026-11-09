/* IL2CPP: Rotatelab.Scripts.ColorBoxColorDataSO$$GetDataByType
Rotatelab_Scripts_ColorBoxColorProperty_o* Rotatelab_Scripts_ColorBoxColorDataSO__GetDataByType (Rotatelab_Scripts_ColorBoxColorDataSO_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxColorDataSO$$GetDataByType
   Rotatelab_Scripts_ColorBoxColorProperty_o* Rotatelab_Scripts_ColorBoxColorDataSO__GetDataByType
   (Rotatelab_Scripts_ColorBoxColorDataSO_o* __this, int32_t colorType, const MethodInfo* method);
    */

undefined4
Rotatelab_Scripts_ColorBoxColorDataSO__GetDataByType_ff4f68(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_0100509c + 0x1004f80);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010050a0 + 0x1004f94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010050a4 + 0x1004fa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010050a8 + 0x1004fac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010050ac + 0x1004fb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010050b0 + 0x1004fc4));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_010050b4 + 0x1004fd8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar4 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010050b8 + 0x1005024));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar6,uVar7,**(undefined4 **)(_UNK_010050bc + 0x1005044),0);
    piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 4);
    *piVar4 = iVar6;
    thunk_FUN_00ec5080(piVar4,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_010050c0 + 0x100506c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_010050c4 + 0x1005090);
  if ((*(int *)(iVar1 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01496d18 + 0x1496cac)), *(int *)(iVar1 + 0x1c) == 0)) {
    FUN_00efd7c4(iVar1);
  }
  uStack_1c = 0;
  if (*(int *)(**(int **)(_UNK_01496d1c + 0x1496cd0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__Int32Enum__1489bc8
                    (uVar5,param_2,iVar6,&uStack_1c,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0xc));
  uVar5 = 0;
  if (iVar1 != 0) {
    uVar5 = uStack_1c;
  }
  return uVar5;
}

