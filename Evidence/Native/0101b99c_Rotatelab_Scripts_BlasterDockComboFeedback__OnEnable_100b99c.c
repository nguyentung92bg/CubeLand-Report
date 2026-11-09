/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$OnEnable
void Rotatelab_Scripts_BlasterDockComboFeedback__OnEnable (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$OnEnable
   void Rotatelab_Scripts_BlasterDockComboFeedback__OnEnable
   (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockComboFeedback__OnEnable_100b99c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0101bb04 + 0x101b9b0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bb08 + 0x101b9c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bb0c + 0x101b9d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bb10 + 0x101b9dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bb14 + 0x101b9e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bb18 + 0x101b9f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bb1c + 0x101ba00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bb20 + 0x101ba0c));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0101bb24 + 0x101ba20);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x50);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101bb28 + 0x101ba44));
  System_Action_int____ctor_1f105bc(uVar4,param_1,**(undefined4 **)(_UNK_0101bb2c + 0x101ba64),0);
  uVar4 = Rotatelab_GameAction_int___op_Addition_23a2a90
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0101bb30 + 0x101ba7c));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x50) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x58);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101bb34 + 0x101baac));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0101bb38 + 0x101bacc),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0101bb3c + 0x101bae4));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x58);
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

