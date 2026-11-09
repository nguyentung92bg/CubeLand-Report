/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$OnEnable
void Rotatelab_Scripts_BlasterDockController__OnEnable (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$OnEnable
   void Rotatelab_Scripts_BlasterDockController__OnEnable
   (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockController__OnEnable_100c7b4(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0101c994 + 0x101c7c8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c998 + 0x101c7dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c99c + 0x101c7e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c9a0 + 0x101c7f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c9a4 + 0x101c800));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c9a8 + 0x101c80c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c9ac + 0x101c818));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c9b0 + 0x101c824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c9b4 + 0x101c830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c9b8 + 0x101c83c));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0101c9bc + 0x101c850);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101c9c0 + 0x101c874));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0101c9c4 + 0x101c894),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0101c9c8 + 0x101c8ac));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x18) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x7c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101c9cc + 0x101c8dc));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0101c9d0 + 0x101c8fc),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x7c) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x20);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101c9d4 + 0x101c93c));
  System_Action_PlayOnOffer____ctor_1f1183c
            (uVar4,param_1,**(undefined4 **)(_UNK_0101c9d8 + 0x101c95c),0);
  uVar4 = Rotatelab_GameAction_PlayOnOffer___op_Addition_23a31dc
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0101c9dc + 0x101c974));
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

