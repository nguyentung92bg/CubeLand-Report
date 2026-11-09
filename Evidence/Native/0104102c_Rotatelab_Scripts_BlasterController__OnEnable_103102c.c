/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnEnable
void Rotatelab_Scripts_BlasterController__OnEnable (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnEnable
   void Rotatelab_Scripts_BlasterController__OnEnable (Rotatelab_Scripts_BlasterController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__OnEnable_103102c(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_010412d8 + 0x1041040);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010412dc + 0x1041054));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010412e0 + 0x1041060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010412e4 + 0x104106c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010412e8 + 0x1041078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010412ec + 0x1041084));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010412f0 + 0x1041090));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010412f4 + 0x104109c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010412f8 + 0x10410a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010412fc + 0x10410b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01041300 + 0x10410c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01041304 + 0x10410cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01041308 + 0x10410d8));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0104130c + 0x10410ec);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_01041310 + 0x1041110);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_01041314 + 0x1041130),0);
  puVar9 = *(undefined4 **)(_UNK_01041318 + 0x104114c);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x10) = uVar4;
  thunk_FUN_00ec5080();
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0104131c + 0x1041170));
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_01041320 + 0x1041198),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__add_OnPauseStateChanged_10162e4(iVar3,uVar4,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01041324 + 0x10411c8));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01041328 + 0x10411dc));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_0104132c + 0x10411f8),0)
  ;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__add_OnPlaceableLeftQueue_1040d8c(iVar3,uVar4,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x18);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_01041330 + 0x1041248),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x18) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x7c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01041334 + 0x1041288));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01041338 + 0x10412a8),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x7c);
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

