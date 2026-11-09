/* IL2CPP: Rotatelab.Scripts.DockManager$$OnDisable
void Rotatelab_Scripts_DockManager__OnDisable (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$OnDisable
   void Rotatelab_Scripts_DockManager__OnDisable (Rotatelab_Scripts_DockManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_DockManager__OnDisable_1004ef4(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_010152b4 + 0x1014f08);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152b8 + 0x1014f1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152bc + 0x1014f28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152c0 + 0x1014f34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152c4 + 0x1014f40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152c8 + 0x1014f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152cc + 0x1014f58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152d0 + 0x1014f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152d4 + 0x1014f70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152d8 + 0x1014f7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152dc + 0x1014f88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152e0 + 0x1014f94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152e4 + 0x1014fa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152e8 + 0x1014fac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152ec + 0x1014fb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152f0 + 0x1014fc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152f4 + 0x1014fd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010152f8 + 0x1014fdc));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010152fc + 0x1014ff0);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01015300 + 0x1015014));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_01015304 + 0x1015034),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar6,uVar4,**(undefined4 **)(_UNK_01015308 + 0x101504c));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 4) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x20);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101530c + 0x101507c));
  System_Action_PlayOnOffer____ctor_1f1183c
            (uVar4,param_1,**(undefined4 **)(_UNK_01015310 + 0x101509c),0);
  uVar4 = Rotatelab_GameAction_PlayOnOffer___op_Subtraction_23a32f8
                    (uVar6,uVar4,**(undefined4 **)(_UNK_01015314 + 0x10150b4));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x20) = uVar4;
  thunk_FUN_00ec5080();
  puVar8 = *(undefined4 **)(_UNK_01015318 + 0x10150e4);
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa4);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_0101531c + 0x1015104),0);
  puVar9 = *(undefined4 **)(_UNK_01015320 + 0x1015120);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa4) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa8);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_01015324 + 0x1015164),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa8) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xac);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_01015328 + 0x10151bc),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xac) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x44);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101532c + 0x10151fc));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01015330 + 0x101521c),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x44) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x24);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01015334 + 0x101525c));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_01015338 + 0x101527c),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar6,uVar4,**(undefined4 **)(_UNK_0101533c + 0x1015294));
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

