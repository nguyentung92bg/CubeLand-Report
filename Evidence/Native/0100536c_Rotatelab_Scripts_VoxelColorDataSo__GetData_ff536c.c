/* IL2CPP: Rotatelab.Scripts.VoxelColorDataSo$$GetData
Rotatelab_Scripts_VoxelColorProperty_o* Rotatelab_Scripts_VoxelColorDataSo__GetData (Rotatelab_Scripts_VoxelColorDataSo_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelColorDataSo$$GetData
   Rotatelab_Scripts_VoxelColorProperty_o* Rotatelab_Scripts_VoxelColorDataSo__GetData
   (Rotatelab_Scripts_VoxelColorDataSo_o* __this, int32_t colorType, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_VoxelColorDataSo__GetData_ff536c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_010054a0 + 0x1005384);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010054a4 + 0x1005398));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010054a8 + 0x10053a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010054ac + 0x10053b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010054b0 + 0x10053bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010054b4 + 0x10053c8));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_010054b8 + 0x10053dc);
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
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010054bc + 0x1005428));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar6,uVar7,**(undefined4 **)(_UNK_010054c0 + 0x1005448),0);
    piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 4);
    *piVar4 = iVar6;
    thunk_FUN_00ec5080(piVar4,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_010054c4 + 0x1005470) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_010054c8 + 0x1005494);
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

