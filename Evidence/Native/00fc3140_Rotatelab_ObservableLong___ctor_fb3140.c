/* IL2CPP: Rotatelab.ObservableLong$$.ctor
void Rotatelab_ObservableLong___ctor (Rotatelab_ObservableLong_o* __this, int64_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableLong$$.ctor
   void Rotatelab_ObservableLong___ctor (Rotatelab_ObservableLong_o* __this, int64_t value, const
   MethodInfo* method); */

void Rotatelab_ObservableLong___ctor_fb3140
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_00fc31b4 + 0xfc3160);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc31b8 + 0xfc3174));
    *pcVar2 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_00fc31bc + 0xfc3194);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0x7fffffff;
  Rotatelab_ObservableValue_long____ctor_185d828(param_1,0x7fffffff,param_3,param_4,*puVar1);
  return;
}

