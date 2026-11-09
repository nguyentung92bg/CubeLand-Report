/* IL2CPP: Rotatelab.Scripts.DockManager$$Awake
void Rotatelab_Scripts_DockManager__Awake (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$Awake
   void Rotatelab_Scripts_DockManager__Awake (Rotatelab_Scripts_DockManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_DockManager__Awake_10047a4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01014a54 + 0x10147bc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a58 + 0x10147d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a5c + 0x10147dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a60 + 0x10147e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a64 + 0x10147f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a68 + 0x1014800));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a6c + 0x101480c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a70 + 0x1014818));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a74 + 0x1014824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a78 + 0x1014830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014a7c + 0x101483c));
    *pcVar4 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01014a80 + 0x1014850));
  piVar8 = *(int **)(_UNK_01014a84 + 0x1014864);
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[3];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01014a88 + 0x10148b0));
    System_Converter_object__Vector3____ctor_1f61894
              (iVar6,uVar7,**(undefined4 **)(_UNK_01014a8c + 0x10148d0),0);
    piVar2 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
    *piVar2 = iVar6;
    thunk_FUN_00ec5080(piVar2,iVar6);
  }
  uVar5 = System_Array__ConvertAll_object__Vector3__163a6a8
                    (uVar5,iVar6,**(undefined4 **)(_UNK_01014a90 + 0x10148fc));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x58),uVar5);
  iVar1 = *piVar8;
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[4];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01014a94 + 0x1014968));
    System_Converter_object__Vector3____ctor_1f61894
              (iVar6,uVar7,**(undefined4 **)(_UNK_01014a98 + 0x1014988),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x10);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  uVar5 = System_Array__ConvertAll_object__Vector3__163a6a8
                    (uVar5,iVar6,**(undefined4 **)(_UNK_01014a9c + 0x10149b4));
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x5c),uVar5);
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = FUN_00ec388c(**(undefined4 **)(_UNK_01014aa0 + 0x10149ec),
                       *(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc));
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = System_Index__op_Implicit_2b692c0(6,0);
  System_Range__EndAt_2b83814(&uStack_20,uVar5,0);
  uVar5 = System_Runtime_CompilerServices_RuntimeHelpers__GetSubArray_object__159cbe0
                    (uVar7,uStack_20,uStack_1c,**(undefined4 **)(_UNK_01014aa4 + 0x1014a34));
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x48),uVar5);
  return;
}

