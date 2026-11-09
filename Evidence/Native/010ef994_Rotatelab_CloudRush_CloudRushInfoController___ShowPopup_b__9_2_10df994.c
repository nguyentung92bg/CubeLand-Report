/* IL2CPP: Rotatelab.CloudRush.CloudRushInfoController$$<ShowPopup>b__9_2
void Rotatelab_CloudRush_CloudRushInfoController___ShowPopup_b__9_2 (Rotatelab_CloudRush_CloudRushInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushInfoController$$<ShowPopup>b__9_2
   void Rotatelab_CloudRush_CloudRushInfoController___ShowPopup_b__9_2
   (Rotatelab_CloudRush_CloudRushInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushInfoController___ShowPopup_b__9_2_10df994(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 auStack_20 [16];
  
  pcVar2 = (char *)(_UNK_010efa3c + 0x10ef9ac);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010efa40 + 0x10ef9c0));
    *pcVar2 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(**(int **)(_UNK_010efa44 + 0x10ef9d4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(auStack_20,uVar1,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  return;
}

