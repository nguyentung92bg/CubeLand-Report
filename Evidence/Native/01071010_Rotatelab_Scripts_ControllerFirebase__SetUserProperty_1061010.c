/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SetUserProperty
void Rotatelab_Scripts_ControllerFirebase__SetUserProperty (System_String_o* name, System_String_o* property, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SetUserProperty
   void Rotatelab_Scripts_ControllerFirebase__SetUserProperty (System_String_o* name,
   System_String_o* property, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010
               (undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined1 uStack_11;
  
  pcVar1 = (char *)(_UNK_01071090 + 0x107102c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071094 + 0x1071040));
    *pcVar1 = '\x01';
  }
  uStack_11 = 0;
  if (*(int *)(**(int **)(_UNK_01071098 + 0x1071058) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uStack_11 = Rotatelab_Scripts_ControllerFirebase__SetUserPropertyAsync_106109c(param_1,param_2);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  return;
}

