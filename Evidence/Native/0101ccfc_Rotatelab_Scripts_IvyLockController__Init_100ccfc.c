/* IL2CPP: Rotatelab.Scripts.IvyLockController$$Init
void Rotatelab_Scripts_IvyLockController__Init (Rotatelab_Scripts_IvyLockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IvyLockController$$Init
   void Rotatelab_Scripts_IvyLockController__Init (Rotatelab_Scripts_IvyLockController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_IvyLockController__Init_100ccfc(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  
  pcVar2 = (char *)(_UNK_0101ce80 + 0x101cd14);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ce84 + 0x101cd28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ce88 + 0x101cd34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ce8c + 0x101cd40));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_50,&uStack_30,0x3f400000,0);
  puVar3 = *(undefined4 **)(_UNK_0101ce90 + 0x101cdac);
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_0101ce94 + 0x101cdcc),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_60,&uStack_30,uVar1,0,0);
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uStack_28 = uStack_58;
  uStack_24 = uStack_54;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_30,0x40166666,0);
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  uStack_28 = uStack_68;
  uStack_24 = uStack_64;
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_0101ce98 + 0x101ce3c),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_80,&uStack_30,uVar1,0,0);
  *(undefined4 *)(param_1 + 0x18) = uStack_80;
  *(undefined4 *)(param_1 + 0x1c) = uStack_7c;
  *(undefined4 *)(param_1 + 0x20) = uStack_78;
  *(undefined4 *)(param_1 + 0x24) = uStack_74;
  thunk_FUN_00ec5080(param_1 + 0x20,0);
  return;
}

