/* IL2CPP: Rotatelab.Scripts.DockManager$$OnEnable
void Rotatelab_Scripts_DockManager__OnEnable (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$OnEnable
   void Rotatelab_Scripts_DockManager__OnEnable (Rotatelab_Scripts_DockManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_DockManager__OnEnable_1004aa8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_01014e68 + 0x1014abc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e6c + 0x1014ad0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e70 + 0x1014adc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e74 + 0x1014ae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e78 + 0x1014af4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e7c + 0x1014b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e80 + 0x1014b0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e84 + 0x1014b18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e88 + 0x1014b24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e8c + 0x1014b30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e90 + 0x1014b3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e94 + 0x1014b48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e98 + 0x1014b54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014e9c + 0x1014b60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014ea0 + 0x1014b6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014ea4 + 0x1014b78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014ea8 + 0x1014b84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014eac + 0x1014b90));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01014eb0 + 0x1014ba4);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01014eb4 + 0x1014bc8));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_01014eb8 + 0x1014be8),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar6,uVar4,**(undefined4 **)(_UNK_01014ebc + 0x1014c00));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 4) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x20);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01014ec0 + 0x1014c30));
  System_Action_PlayOnOffer____ctor_1f1183c
            (uVar4,param_1,**(undefined4 **)(_UNK_01014ec4 + 0x1014c50),0);
  uVar4 = Rotatelab_GameAction_PlayOnOffer___op_Addition_23a31dc
                    (uVar6,uVar4,**(undefined4 **)(_UNK_01014ec8 + 0x1014c68));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x20) = uVar4;
  thunk_FUN_00ec5080();
  puVar8 = *(undefined4 **)(_UNK_01014ecc + 0x1014c98);
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa4);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_01014ed0 + 0x1014cb8),0);
  puVar9 = *(undefined4 **)(_UNK_01014ed4 + 0x1014cd4);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa4) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa8);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_01014ed8 + 0x1014d18),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa8) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xac);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_01014edc + 0x1014d70),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xac) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x44);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01014ee0 + 0x1014db0));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01014ee4 + 0x1014dd0),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x44) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x24);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01014ee8 + 0x1014e10));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_01014eec + 0x1014e30),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar6,uVar4,**(undefined4 **)(_UNK_01014ef0 + 0x1014e48));
  puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x24);
  *puVar8 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar8 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

