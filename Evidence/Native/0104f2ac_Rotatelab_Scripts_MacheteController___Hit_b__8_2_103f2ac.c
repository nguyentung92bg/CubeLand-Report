/* IL2CPP: Rotatelab.Scripts.MacheteController$$<Hit>b__8_2
void Rotatelab_Scripts_MacheteController___Hit_b__8_2 (Rotatelab_Scripts_MacheteController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MacheteController$$<Hit>b__8_2
   void Rotatelab_Scripts_MacheteController___Hit_b__8_2 (Rotatelab_Scripts_MacheteController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_MacheteController___Hit_b__8_2_103f2ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
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
  
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_01022abc + 0x1022964);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022ac0 + 0x1022978),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022ac4 + 0x1022984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022ac8 + 0x1022990));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  PrimeTween_Sequence__Stop_2cf07bc(iVar2 + 0x18,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
  puVar4 = *(undefined4 **)(_UNK_01022acc + 0x10229e8);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  uVar1 = thunk_FUN_00f00cdc(*puVar4);
  System_Action___ctor_2b10bac(uVar1,iVar2,**(undefined4 **)(_UNK_01022ad0 + 0x1022a08),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_50,&uStack_30,uVar1,0,0);
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_60,&uStack_30,0x3f99999a,0);
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uStack_28 = uStack_58;
  uStack_24 = uStack_54;
  uVar1 = thunk_FUN_00f00cdc(*puVar4);
  System_Action___ctor_2b10bac(uVar1,iVar2,**(undefined4 **)(_UNK_01022ad4 + 0x1022a78),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_70,&uStack_30,uVar1,0,0);
  Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
            (&uStack_70,uStack_64,uStack_70,uStack_6c,uStack_68,uStack_64,0);
  return;
}

