/* IL2CPP: BoosterPreventController$$OnDestroy
void BoosterPreventController__OnDestroy (BoosterPreventController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterPreventController$$OnDestroy
   void BoosterPreventController__OnDestroy (BoosterPreventController_o* __this, const MethodInfo*
   method); */

void BoosterPreventController__OnDestroy_fa2c04(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar6 = (char *)(_UNK_00fb2e48 + 0xfb2c18);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e4c + 0xfb2c2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e50 + 0xfb2c38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e54 + 0xfb2c44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e58 + 0xfb2c50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e5c + 0xfb2c5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e60 + 0xfb2c68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e64 + 0xfb2c74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e68 + 0xfb2c80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e6c + 0xfb2c8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2e70 + 0xfb2c98));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_00fb2e74 + 0xfb2cac);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  puVar9 = *(undefined4 **)(_UNK_00fb2e78 + 0xfb2cd0);
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa4);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_00fb2e7c + 0xfb2cf0),0);
  puVar5 = *(undefined4 **)(_UNK_00fb2e80 + 0xfb2d0c);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa4) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa8);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_00fb2e84 + 0xfb2d50),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa8) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x24);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fb2e88 + 0xfb2d90));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_00fb2e8c + 0xfb2db0),0);
  uVar4 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_00fb2e90 + 0xfb2dc8));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x24) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x34);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fb2e94 + 0xfb2df8));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_00fb2e98 + 0xfb2e18),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x34);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

