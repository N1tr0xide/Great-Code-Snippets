///Used to determine if a string can be safely converted into an int. outs the result if it does.
void ConvertStringToInt()
{
  if (!int.TryParse(textAsString, out numberAsInt))
  {
  Debug.Log("Error. Please insert numbers only.");
  return;
  }
}

//rotate gameobject towards target only in the y axis.
void LookAtConstrained()
{
  Quaternion targetRotation = Quaternion.LookRotation(_playerVision.Target.transform.position - transform.position, Vector3.up);
  targetRotation = new Quaternion(0, targetRotation.y, 0, targetRotation.w);
  transform.rotation = Quaternion.RotateTowards(transform.rotation, targetRotation, 360 * Time.deltaTime);
}  
