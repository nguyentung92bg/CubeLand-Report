/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<TryUseSwordInDocksContinuouslyCoroutine>d__77$$System.IDisposable.Dispose
void Rotatelab_Scripts_PlaceableManager__TryUseSwordInDocksContinuouslyCoroutine_d__77__System_IDisposable_Dispose (Rotatelab_Scripts_PlaceableManager__TryUseSwordInDocksContinuouslyCoroutine_d__77_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Scripts.PlaceableManager.<TryUseSwordInDocksContinuouslyCoroutine>d__77$$System.IDisposable.Dispose
   void 
   Rotatelab_Scripts_PlaceableManager__TryUseSwordInDocksContinuouslyCoroutine_d__77__System_IDisposable_Dispose
   (Rotatelab_Scripts_PlaceableManager__TryUseSwordInDocksContinuouslyCoroutine_d__77_o* __this,
   const MethodInfo* method); */

undefined8
Rotatelab_Scripts_PlaceableManager__TryUseSwordInDocksContinuouslyCoroutine_d__77__System_IDisposable_Dispose_104cde8
          (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2 || iVar1 == -3) {
    pcVar3 = (char *)(_UNK_0105d1b4 + 0x105d178);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0105d1b8 + 0x105d18c));
      *pcVar3 = '\x01';
    }
    uVar2 = **(undefined4 **)(_UNK_0105d1bc + 0x105d1a0);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return CONCAT44(uVar2,param_1 + 0x14);
  }
  return CONCAT44(iVar1,param_1);
}

