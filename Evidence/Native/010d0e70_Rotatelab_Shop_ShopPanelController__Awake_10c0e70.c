/* IL2CPP: Rotatelab.Shop.ShopPanelController$$Awake
void Rotatelab_Shop_ShopPanelController__Awake (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$Awake
   void Rotatelab_Shop_ShopPanelController__Awake (Rotatelab_Shop_ShopPanelController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__Awake_10c0e70(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  
  pcVar6 = (char *)(_UNK_010d125c + 0x10d0e84);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1260 + 0x10d0e98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1264 + 0x10d0ea4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1268 + 0x10d0eb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d126c + 0x10d0ebc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1270 + 0x10d0ec8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1274 + 0x10d0ed4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1278 + 0x10d0ee0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d127c + 0x10d0eec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1280 + 0x10d0ef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1284 + 0x10d0f04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1288 + 0x10d0f10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d128c + 0x10d0f1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1290 + 0x10d0f28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1294 + 0x10d0f34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1298 + 0x10d0f40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d129c + 0x10d0f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d12a0 + 0x10d0f58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d12a4 + 0x10d0f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d12a8 + 0x10d0f70));
    *pcVar6 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_010d12ac + 0x10d0f84));
  piVar9 = *(int **)(_UNK_010d12b0 + 0x10d0f98);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x118);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d12b4 + 0x10d0fbc));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010d12b8 + 0x10d0fdc),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010d12bc + 0x10d0ff4));
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x118) = uVar4;
  thunk_FUN_00ec5080();
  piVar8 = *(int **)(_UNK_010d12c0 + 0x10d101c);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  if (**(char **)(iVar3 + 0x5c) == '\0') {
    pcVar6 = (char *)(iRam0360d868 + 0x360d7f4);
    if (*pcVar6 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam0360d86c + 0x360d808),0,0);
      *pcVar6 = '\x01';
    }
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(iRam0360d870 + 0x360d834);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam0360d874 + 0x360d844);
        *(code **)(iRam0360d878 + 0x360d854) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x0360d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0x48);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d12c4 + 0x10d105c));
  UnityEngine_Events_UnityAction_Vector2____ctor_1c60160
            (uVar4,param_1,**(undefined4 **)(_UNK_010d12c8 + 0x10d107c),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent_Vector2___AddListener_1c62e34
            (iVar3,uVar4,**(undefined4 **)(_UNK_010d12cc + 0x10d10a0));
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0xb4);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d12d0 + 0x10d10c4));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar4,param_1,**(undefined4 **)(_UNK_010d12d4 + 0x10d10e4),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar4,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d12d8 + 0x10d1114));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d12dc + 0x10d1128));
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_010d12e0 + 0x10d1144),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIManager__add_OnPageOpened_1127194(iVar3,uVar4,0);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xe4);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d12e4 + 0x10d1190));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d12e8 + 0x10d11b0),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xe4) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xe0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d12ec + 0x10d11f0));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_010d12f0 + 0x10d1210),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010d12f4 + 0x10d1228));
  puVar5 = (undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xe0);
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

