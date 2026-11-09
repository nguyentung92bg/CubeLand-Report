/* IL2CPP: Rotatelab.Scripts.BombController$$AnimatePunch
void Rotatelab_Scripts_BombController__AnimatePunch (Rotatelab_Scripts_BombController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BombController$$AnimatePunch
   void Rotatelab_Scripts_BombController__AnimatePunch (Rotatelab_Scripts_BombController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_BombController__AnimatePunch_ff742c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_0100756c + 0x1007444);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007570 + 0x1007458));
    *pcVar2 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x28),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_38,1,0,1,0,0,0);
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_01007574 + 0x10074c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4a3c
            (&uStack_48,uVar1,0x3f800000,0x3f866666,0x3d99999a,0,0,0,0,0,2,3,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_48,&uStack_28,uStack_48,uStack_44,uStack_40,uStack_3c,0);
  *(undefined4 *)(param_1 + 0x28) = uStack_48;
  *(undefined4 *)(param_1 + 0x2c) = uStack_44;
  *(undefined4 *)(param_1 + 0x30) = uStack_40;
  *(undefined4 *)(param_1 + 0x34) = uStack_3c;
  thunk_FUN_00ec5080(param_1 + 0x30,0);
  return;
}

