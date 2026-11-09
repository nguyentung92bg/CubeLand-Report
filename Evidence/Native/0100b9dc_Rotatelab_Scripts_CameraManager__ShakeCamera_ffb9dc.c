/* IL2CPP: Rotatelab.Scripts.CameraManager$$ShakeCamera
void Rotatelab_Scripts_CameraManager__ShakeCamera (Rotatelab_Scripts_CameraManager_o* __this, float strength, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.CameraManager$$ShakeCamera
   void Rotatelab_Scripts_CameraManager__ShakeCamera (Rotatelab_Scripts_CameraManager_o* __this,
   float strength, const MethodInfo* method); */

void Rotatelab_Scripts_CameraManager__ShakeCamera_ffb9dc(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_0100bbac + 0x100b9f4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bbb0 + 0x100ba08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bbb4 + 0x100ba14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bbb8 + 0x100ba20));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (*(int *)(**(int **)(_UNK_0100bbbc + 0x100ba40) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined4 *)(param_1 + 0x30),0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_40,*(int *)(param_1 + 0x20),0);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  pcVar3 = (char *)(_UNK_0100bbc0 + 0x100ba94);
  cVar1 = *pcVar3;
  *(undefined4 *)(param_1 + 0x2c) = uStack_38;
  *(undefined8 *)(param_1 + 0x24) = uStack_40;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bbc4 + 0x100bab8));
    *pcVar3 = '\x01';
  }
  fVar5 = *(float *)(param_1 + 0x10);
  iVar2 = *(int *)(**(int **)(_UNK_0100bbc8 + 0x100badc) + 0x5c);
  PrimeTween_Tween__ShakeLocalPosition_2ceafe8
            (&uStack_50,uVar4,*(float *)(iVar2 + 0xc) * fVar5,*(float *)(iVar2 + 0x10) * fVar5,
             *(float *)(iVar2 + 0x14) * fVar5,0x3ecccccd,*(undefined4 *)(param_1 + 0x14),1,0,0,1,0,0
             ,0,0);
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0100bbcc + 0x100bb4c));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0100bbd0 + 0x100bb6c),0);
  PrimeTween_Tween__OnComplete_2ceddf8(&uStack_60,&uStack_30,uVar4,0,0);
  *(undefined4 *)(param_1 + 0x30) = uStack_60;
  *(undefined4 *)(param_1 + 0x34) = uStack_5c;
  *(undefined4 *)(param_1 + 0x38) = uStack_58;
  *(undefined4 *)(param_1 + 0x3c) = uStack_54;
  thunk_FUN_00ec5080(param_1 + 0x38,0);
  return;
}

