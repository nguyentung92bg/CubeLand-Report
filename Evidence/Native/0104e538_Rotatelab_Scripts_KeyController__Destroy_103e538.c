/* IL2CPP: Rotatelab.Scripts.KeyController$$Destroy
void Rotatelab_Scripts_KeyController__Destroy (Rotatelab_Scripts_KeyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.KeyController$$Destroy
   void Rotatelab_Scripts_KeyController__Destroy (Rotatelab_Scripts_KeyController_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_KeyController__Destroy_103e538(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_0104e5e0 + 0x104e54c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e5e4 + 0x104e560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e5e8 + 0x104e56c));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0104e5ec + 0x104e580));
  if (iVar1 != 0) {
    Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4(iVar1,param_1,0);
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (*(int *)(**(int **)(_UNK_0104e5f0 + 0x104e5c0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar2 = (char *)(_UNK_03619a18 + 0x36199d0);
    if (*pcVar2 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619a1c + 0x36199e4),0);
      *pcVar2 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_03619a20 + 0x36199f8) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar2 = (char *)(_UNK_03619948 + 0x36198a0);
    if (*pcVar2 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361994c + 0x36198b4));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619950 + 0x36198c0));
      *pcVar2 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_03619954 + 0x36198d4) + 0x1c) == 0) {
      thunk_FUN_00efd7c4();
    }
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(**(int **)(_UNK_03619958 + 0x36198fc) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0361995c + 0x3619918);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03619960 + 0x3619928);
      *(code **)(_UNK_03619964 + 0x3619938) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x03619944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

