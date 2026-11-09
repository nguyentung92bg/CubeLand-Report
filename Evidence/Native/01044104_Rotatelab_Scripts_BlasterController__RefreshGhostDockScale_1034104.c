/* IL2CPP: Rotatelab.Scripts.BlasterController$$RefreshGhostDockScale
void Rotatelab_Scripts_BlasterController__RefreshGhostDockScale (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$RefreshGhostDockScale
   void Rotatelab_Scripts_BlasterController__RefreshGhostDockScale
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__RefreshGhostDockScale_1034104(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pcVar5 = (char *)(_UNK_010441d8 + 0x104411c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010441dc + 0x1044130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010441e0 + 0x104413c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010441e4 + 0x1044154) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0xe8),0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010441e8 + 0x1044180));
  if (iVar3 != 0) {
    uVar4 = Rotatelab_Scripts_DockManager__get_GhostBlasterScale_1004494(iVar3,0);
    Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58
              (&uStack_28,param_1,uVar4,0x3e800000,0);
    *(undefined8 *)(param_1 + 0xe8) = uStack_28;
    *(undefined8 *)(param_1 + 0xf0) = uStack_20;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + (param_1 + 0xf0U >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << ((param_1 + 0xf0U & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

