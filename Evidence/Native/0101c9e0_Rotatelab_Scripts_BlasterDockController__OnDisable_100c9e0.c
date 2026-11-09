/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$OnDisable
void Rotatelab_Scripts_BlasterDockController__OnDisable (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$OnDisable
   void Rotatelab_Scripts_BlasterDockController__OnDisable
   (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockController__OnDisable_100c9e0(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0101cbc0 + 0x101c9f4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101cbc4 + 0x101ca08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101cbc8 + 0x101ca14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101cbcc + 0x101ca20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101cbd0 + 0x101ca2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101cbd4 + 0x101ca38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101cbd8 + 0x101ca44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101cbdc + 0x101ca50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101cbe0 + 0x101ca5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101cbe4 + 0x101ca68));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0101cbe8 + 0x101ca7c);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101cbec + 0x101caa0));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0101cbf0 + 0x101cac0),0);
  uVar4 = Rotatelab_GameAction_bool___op_Subtraction_23a2944
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0101cbf4 + 0x101cad8));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x18) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x7c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101cbf8 + 0x101cb08));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0101cbfc + 0x101cb28),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x7c) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x20);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101cc00 + 0x101cb68));
  System_Action_PlayOnOffer____ctor_1f1183c
            (uVar4,param_1,**(undefined4 **)(_UNK_0101cc04 + 0x101cb88),0);
  uVar4 = Rotatelab_GameAction_PlayOnOffer___op_Subtraction_23a32f8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0101cc08 + 0x101cba0));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x20);
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

