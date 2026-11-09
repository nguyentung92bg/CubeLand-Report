/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<TryUseScissorsInDocksContinuouslyCoroutine>d__76$$System.IDisposable.Dispose
void Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76__System_IDisposable_Dispose (Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Scripts.PlaceableManager.<TryUseScissorsInDocksContinuouslyCoroutine>d__76$$System.IDisposable.Dispose
   void 
   Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76__System_IDisposable_Dispose
   (Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76_o* __this,
   const MethodInfo* method); */

undefined8
Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76__System_IDisposable_Dispose_104c9c0
          (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2 || iVar1 == -3) {
    pcVar3 = (char *)(_UNK_0105cd88 + 0x105cd4c);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0105cd8c + 0x105cd60));
      *pcVar3 = '\x01';
    }
    uVar2 = **(undefined4 **)(_UNK_0105cd90 + 0x105cd74);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return CONCAT44(uVar2,param_1 + 0x14);
  }
  return CONCAT44(iVar1,param_1);
}

