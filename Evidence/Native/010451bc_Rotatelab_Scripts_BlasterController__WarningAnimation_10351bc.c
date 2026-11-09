/* IL2CPP: Rotatelab.Scripts.BlasterController$$WarningAnimation
void Rotatelab_Scripts_BlasterController__WarningAnimation (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$WarningAnimation
   void Rotatelab_Scripts_BlasterController__WarningAnimation
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__WarningAnimation_10351bc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010453b8 + 0x10451d4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010453bc + 0x10451e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010453c0 + 0x10451f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010453c4 + 0x1045200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010453c8 + 0x104520c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010453cc + 0x1045218));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  Rotatelab_Scripts_BlasterController__SetEndlessShakeAnimationEnabled_1034fbc(param_1,0);
  *(undefined1 *)(param_1 + 0xc6) = 1;
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  piVar6 = *(int **)(_UNK_010453d0 + 0x1045260);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__ShakeLocalRotation_2ceb538
            (&uStack_40,uVar1,0x41000000,0x41000000,0x41000000,0x3e4ccccd,0x41d80000,1,1,0,1,0,0,0,0
            );
  piVar7 = *(int **)(_UNK_010453d4 + 0x10452d0);
  iVar2 = *piVar7;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar5 = puVar3[7];
  if (iVar5 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar1 = *puVar3;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010453d8 + 0x1045320));
    System_Action_object____ctor_1f11414(iVar5,uVar1,**(undefined4 **)(_UNK_010453dc + 0x1045340),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x1c);
    *piVar7 = iVar5;
    thunk_FUN_00ec5080(piVar7,iVar5);
  }
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_40,&uStack_30,param_1,iVar5,0,**(undefined4 **)(_UNK_010453e0 + 0x1045384));
  *(undefined4 *)(param_1 + 0xd8) = uStack_40;
  *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
  *(undefined4 *)(param_1 + 0xe0) = uStack_38;
  *(undefined4 *)(param_1 + 0xe4) = uStack_34;
  thunk_FUN_00ec5080(param_1 + 0xe0,0);
  return;
}

