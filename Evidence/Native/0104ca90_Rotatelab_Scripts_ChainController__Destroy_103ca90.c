/* IL2CPP: Rotatelab.Scripts.ChainController$$Destroy
void Rotatelab_Scripts_ChainController__Destroy (Rotatelab_Scripts_ChainController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ChainController$$Destroy
   void Rotatelab_Scripts_ChainController__Destroy (Rotatelab_Scripts_ChainController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_ChainController__Destroy_103ca90(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_0104cafc + 0x104caa4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104cb00 + 0x104cab8));
    *pcVar2 = '\x01';
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (*(int *)(**(int **)(_UNK_0104cb04 + 0x104cadc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar2 = (char *)(_UNK_0361987c + 0x3619834);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619880 + 0x3619848),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03619884 + 0x361985c) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar2 = (char *)(_UNK_036197ac + 0x3619704);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036197b0 + 0x3619718));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036197b4 + 0x3619724));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_036197b8 + 0x3619738) + 0x1c) == 0) {
    thunk_FUN_00efd7c4();
  }
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  if (*(int *)(**(int **)(_UNK_036197bc + 0x3619760) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_036197c0 + 0x361977c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_036197c4 + 0x361978c);
    *(code **)(_UNK_036197c8 + 0x361979c) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x036197a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,0);
  return;
}

