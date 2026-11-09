/* IL2CPP: Rotatelab.Shop.ShopPanelController$$.ctor
void Rotatelab_Shop_ShopPanelController___ctor (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$.ctor
   void Rotatelab_Shop_ShopPanelController___ctor (Rotatelab_Shop_ShopPanelController_o* __this,
   const MethodInfo* method); */

int Rotatelab_Shop_ShopPanelController___ctor_10c3368(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_010d3450 + 0x10d337c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3454 + 0x10d3390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3458 + 0x10d339c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d345c + 0x10d33a8));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_010d3460 + 0x10d33bc);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_010d3464 + 0x10d33d4);
  System_Collections_Generic_List_object____ctor_267d2e8(uVar1,0x10,*puVar4);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x68),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Collections_Generic_List_object____ctor_267d2e8(uVar1,8,*puVar4);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x6c),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Collections_Generic_List_object____ctor_267d2e8(uVar1,8,*puVar4);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x70),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

