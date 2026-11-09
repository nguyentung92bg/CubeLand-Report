/* IL2CPP: Rotatelab.Scripts.PlaypenController$$OnScrewDestroyed
void Rotatelab_Scripts_PlaypenController__OnScrewDestroyed (Rotatelab_Scripts_PlaypenController_o* __this, Rotatelab_Scripts_ScrewController_o* screw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaypenController$$OnScrewDestroyed
   void Rotatelab_Scripts_PlaypenController__OnScrewDestroyed
   (Rotatelab_Scripts_PlaypenController_o* __this, Rotatelab_Scripts_ScrewController_o* screw, const
   MethodInfo* method); */

void Rotatelab_Scripts_PlaypenController__OnScrewDestroyed_104fb04(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_0105fba0 + 0x105fb1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105fba4 + 0x105fb30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105fba8 + 0x105fb3c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___Remove_267f138
                    (*(int *)(param_1 + 0x14),param_2,**(undefined4 **)(_UNK_0105fbac + 0x105fb64));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 0xc) != 0) {
    return;
  }
  pcVar3 = (char *)(_UNK_0105fdc4 + 0x105fbc8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105fdc8 + 0x105fbdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105fdcc + 0x105fbe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105fdd0 + 0x105fbf4));
    *pcVar3 = '\x01';
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
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_0105fdd4 + 0x105fc58) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_50,uVar2,0x3f99999a,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_50,&uStack_30,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Tween__Scale_2ce4684(&uStack_60,uVar2,0,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_30,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uStack_28 = uStack_58;
  uStack_24 = uStack_54;
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105fdd8 + 0x105fd60));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0105fddc + 0x105fd80),0);
  PrimeTween_Sequence__OnComplete_2cf16e0(&uStack_70,&uStack_30,uVar2,0,0);
  Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
            (&uStack_70,uStack_64,uStack_70,uStack_6c,uStack_68,uStack_64,0);
  return;
}

